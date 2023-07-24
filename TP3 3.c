#include <stdio.h>
#include <math.h>
#define d 2*x
#define e 3*x
#define pi 3.14
#define h 4*pi/50
int  main (){
	int i;
	float y;
	float x=0;
	float b;
	float c;
	
	for(i=0; i<50; i++){
		x=x+h;
		y = sin(x)+0.7*cos(d)+0.5*sin(e);
		printf ("\n y = %f", y);
		printf (" x = %f", x);
	}

	
}