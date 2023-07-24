#include <stdio.h>
#include <math.h>
int main (){
	int i;
	int a=1;
	int b=1;
	int c;
	int contador=1;
	
	
	printf ("\n posición: ");
	scanf ("%d", &i);
		
		if (i==0){
			printf ("\n Error");
		}
		
		if (i>=3){
			do {
				c=a+b;
				contador++;
				b=a;
				a=c;
			}
			while (contador<i);	
		}
		if (i<=2){
			c=1;
		}
	
	printf("\n numero= %d",c);
     
	
	}

