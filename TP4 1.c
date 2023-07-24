#include <stdio.h>
#include <math.h>


int main() {
	float valores[5];
	float suma=0;
	float prom;
	float p=0;
	float cuadratico;
	int i;
	for(i=0; i<5;i++){
		printf("\n valor %d: ",i+1);
		scanf("%f", &valores[i]);
		suma=suma+valores[i];
	}
	prom=suma/5;
	printf("\n promedio= %.1f",prom);
	
	for(i=0; i<5;i++){
		
		p=p+pow((prom-valores[i]),2);
		
	}
	
	cuadratico=sqrt(p/5);
	printf("\n error= %.1f",cuadratico);
}
