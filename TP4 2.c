#include <stdio.h>
#include <math.h>
int main() {
	int v[10];
	int i;
	float f;
	float g;
	float m;
	float n;
	for(i=0;i<10;i++){
	printf("\n numero %d: ",i+1);
	scanf ("%d",&v[i]);
    }	
	f=v[0]+v[2]+v[4]+v[6]+v[8];
	g=v[1]+v[3]+v[5]+v[7]+v[9];
	m=f/5;
	n=g/5;
	printf("\n suma posiciones pares: %f",f);
	printf("\n suma posiciones impares: %f",g);
	printf("\n promedio posiciones pares: %f",m);
	printf("\n promedio posiciones impares: %f",n);
	}
