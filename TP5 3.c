#include <stdio.h>
#include <math.h>
float raiz(float r1, float r2, float r3) {
	
	float requiv = 0;
	float d;
	
	printf( "\n   Introduzca R1: " );
	scanf( "%f", &r1 );
	
	printf( "\n   Introduzca R2: " );
	scanf( "%f", &r2);
	
	printf( "\n   Introduzca R3: " );
	scanf( "%f", &r3);
	
	d = 1/r1+1/r2+1/r3;
	requiv = 1/d;
	
	printf("reultado: %f",requiv);
	return requiv;
	
}

int main(void) {
	float r1, r2, r3;
	float d, requiv;
	raiz(r1,r2,r3);
	return 0;
}