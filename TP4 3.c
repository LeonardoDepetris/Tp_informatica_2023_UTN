#include <stdio.h>
#include <math.h>
int main() {
	int i;
	int j;
	int contadormen=0;
	int contadormay=0;
	float suma=0;
	float prom=0;
	int v[10];
	for(i=0;i<10;i++){
		printf ("\n nota alumno %d: ",i+1);
		scanf ("%d",&v[i]);
		suma=suma+v[i];
	}
	prom=suma/10;
	printf("%f\n",suma);
	printf("%f",prom);
	for(j=0;j<10;j++){
		if(prom>=v[j]){
			contadormen=contadormen+1;
		}
		else
			contadormay=contadormay+1;
		
	}
	printf("\n alumnos sobre el promedio= %d",contadormay);
		printf("\n alumnos debajo del promedio= %d",contadormen);
	
}