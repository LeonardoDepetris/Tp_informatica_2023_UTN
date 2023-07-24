#include <stdio.h>
#include <math.h>
int main(){
	int bin[20]={0};
	int i, j, n=1, a=0, b=0, c=0, d=0;
		
	for(i=1;i<=100;i++){
		for(j=1;j<=50;j++){
			a=n%j;
			if(a==0){
				d++;
			}
		}
		if(d<=2){
			bin[c]=n;
			c++;
		}
		n++;
	d=0;
	}
	for(b=0;b<20;b++){
	printf("\n %d",bin[b]);
	}
}