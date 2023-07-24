#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1416
 float valor;
float horack(int r, int elegir){
	if(r<=0){
		printf("\n Error");
	}
	switch(elegir){
	case '1':
	    valor=2*PI*r;
	    return valor;
	case '2':
		valor=PI*r*r;
		return valor;
	case '3':
		valor=(4*PI*r*r*r)/3;
		return valor;
	}
	return elegir;
}
	int main (void){
	float r;
	char elegir;
	char pingu;
	printf ("\n El radio vale: ");
	scanf ("%f", &r);
	printf("\n elija 1 para circunferencia, 2 para area o 3 para volumen: ");
	scanf("%c", &pingu);
	scanf ("%c", &elegir);
	horack(r,elegir);
	
	printf("\n el resultado es: %f",valor);
	return 0;
}