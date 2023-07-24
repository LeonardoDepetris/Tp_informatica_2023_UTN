#include <stdio.h>
#include <math.h>
 
int main(){
	float x=0;
	float s[36]={0};
	float a[36]={0};
	float p[36]={0};
	int i;
	float b;
	float d;
	float c;
	for(i=0;i<36;i++){
		c=sin(x);
		s[i]=c;
		a[i]=x;
		b= s[i]+s[i+1]+s[i+2];
		d=b/3;
		p[i]=d;
		printf(" valores de x son: %f \t  valores de sen de x son: %f \t valores p %f \n",a[i],s[i],p[i]);
		x=x+0.174533;
		
	}

}
	