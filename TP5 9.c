#include <stdio.h>
#include <math.h>
#include <string.h>

int coordenadas(float vfinal){
	int a,b,c,d,e,f,xs,ys,zs,dxs,dys,dzs;
	printf("\n valor de x1: ");
	scanf ("%d",&a);
	printf("\n valor de y1: ");
	scanf ("%d",&b);
	printf("\n valor de z1: ");
	scanf ("%d",&c);
	printf("\n valor de x2: ");
	scanf ("%d",&d);
	printf("\n valor de y2: ");
	scanf ("%d",&e);
	printf("\n valor de z2: ");
	scanf ("%d",&f);
	
	
	xs=d-a;
	ys=e-b;
	zs=f-c;
	dxs=xs*xs;
	dys=ys*ys;
	dzs=zs*zs;
	vfinal=sqrt(dxs+dys+dzs);
	printf("\n El valor final es %f",vfinal);
	return xs;
}
	int main (void){
		float vfinal;
		coordenadas(vfinal);
	}
