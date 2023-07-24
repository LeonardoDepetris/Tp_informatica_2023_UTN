#include <stdio.h>
#include <math.h>

int horack(int valor) {
	int a=1, b=1, n, i;
	printf("\n escriba un numero: ");
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		b=a*b;
		valor=b;
		
	}
	printf ("\n el valor es %d",valor);
    return valor;
}
	int main (void){
		int valor;
		horack(valor);
	

	return 0;
}