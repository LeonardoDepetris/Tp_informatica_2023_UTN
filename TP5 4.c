#include <stdio.h>
#include <math.h>
int num(void) {
	int numeros[3];
	int cam;
	int i;
	int j;
	for(i=0; i<3;i++){
	 printf("\n escriba un numero: ");
	 scanf("%d", &numeros[i]);
	}
	for( j=0;j<3;j++){
		for(i=0;i<3;i++){
			if(numeros[i]<numeros[i+1]){
				cam=numeros[i+1];
				numeros[i+1]=numeros[i];
				numeros[i]=cam;
			}
		}
		
	}
	printf("el menor es el: %d",numeros[j]);
	return i;
}
int main(void){
	num();
	return 0;
}