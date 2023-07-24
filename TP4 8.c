#include <stdio.h>
#include <math.h>
 
int main(){
	float x=0;
	float s[36]={0};
	float a[36]={0};
	int i;
	float b;
	float c;
	for(i=0;i<36;i++){
		c=sin(x);
		s[i]=c;
		a[i]=x;
		printf(" valores de x son: %f \t  valores de sen de x son: %f \n",a[i],s[i]);
		x=x+0.174533;
		
	}

}