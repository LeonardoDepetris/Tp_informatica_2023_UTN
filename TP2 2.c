#include <stdio.h>
#include <conio.h>

int contador=0;
int r;
int main()
{
	int suma=0, promedio;
	int num;
	int i;
	for(i=0; i<10; i++)
	{
		printf("ingrese un numero real:");
		scanf("%d",&num);
		r=num%3;
		if (r==0){
		contador=contador+1;}
		
	}
	
	
	
	printf("\n Los numeros son %d\n",contador);
	
	
	
}