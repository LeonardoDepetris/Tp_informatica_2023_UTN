#include <iostream>
#include <math.h>
using namespace std;

int descuento(float p, float d) {
	float a, total=0;
	 printf("\n el valor total de la compra es de: ");
	 scanf ("%f", &p);
	 printf("\n con un descuento del: ");
	 scanf ("%f", &d);
	 a = p*d;
	 total= a/100;
	 printf("%f",total);
	 return a;
}
 int main (void){
	 float p, d;
	 descuento(p,d);
	 return 0;
 }