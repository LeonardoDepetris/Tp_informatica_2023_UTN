#include <stdio.h>
#include <math.h>
#include <string.h>

int coordenadas(float vfinal){
	int a,b,c,d,xs,ys,dxs,dys;
	printf("\n valor de x1: ");
	scanf ("%d",&a);
	printf("\n valor de y1: ");
	scanf ("%d",&b);
	printf("\n valor de x2: ");
	scanf ("%d",&c);
	printf("\n valor de y2: ");
	scanf ("%d",&d);
	
	xs=c-a;
	ys=d-b;
	dxs=xs*xs;
	dys=ys*ys;
	vfinal=sqrt(dxs+dys);
	printf("\n El valor final es %f",vfinal);
	return xs;
}
	int main (void){
		float vfinal;
		coordenadas(vfinal);
	}