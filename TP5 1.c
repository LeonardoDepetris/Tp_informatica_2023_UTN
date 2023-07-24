#include <stdio.h>

int potencia(int a, int b){
	int i;
	int c=1;
	if(b==0){
		c=1;
	 }
	else{
		for(i=0;i<b;i++){
			c=a*c;
		}
	}
	return c;
}
	int main (void){
		int d;
		int e;
		printf("ingrese un numero y a que lo quiere elevar: ");
		scanf("%d %d", &d, &e);
		printf ("el resultado es: %d",potencia(d,e));
		return 0;
	}