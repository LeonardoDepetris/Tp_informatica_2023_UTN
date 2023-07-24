#include <stdio.h>
#include <math.h>
int main()
{
	float suma=0, promedio, num;
	int i;
	for(i=0; i<10; i++)
	{
		printf("ingrese un numero real:");
		scanf("%f",&num);
		suma=suma+num;
	}
	
	
	promedio=suma/10;
	printf("\n El promedio es %.2f\n",promedio);
	
	
	getche();
	
}