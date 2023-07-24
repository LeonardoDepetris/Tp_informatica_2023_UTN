#include <stdio.h>
#include <math.h>
#define pi 3.14
#define b 0.75
int main (){
	float r;
	float a= 2;
	float c;
	float d;
	float e;
	
	
	printf ("\n El radio vale: ");
	scanf ("%f", & r);
	if (r<=0){
		printf ("\n ERROR");
	}
	if (r>=1){
		c= a*pi*r;
		d= pi*r*r;
		e= b*pi*r*r*r;
	}
	
	printf ("\n longitud de circunsferencia= %f",c);
	printf ("\n area de un circulo= %f",d);
	printf ("\n volumen de una esfera= %f",e);
		
}