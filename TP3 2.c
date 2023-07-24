#include<stdio.h>
#include<math.h>
	int main(){
		
		char opciones;	
		float radio;
		float volumen;
		float area;
		float longitud;
		float PI=3.1416;
		
		
		printf("ingrese el valor para el Radio: ");
		scanf("%f",&radio);
		scanf("%c",&opciones);
		printf("seleccione una opcion.\n");
		printf("a)Cálculo de la longitud de la circunferencia\n");
		printf("b)Cálculo del área del círculo \n");
		printf("c)Cálculo del volumen de la esfera\n");
		scanf("%c",&opciones);
		
		switch(opciones)	{
		case 'a':
			longitud=2*PI*radio;
			printf("la lingutud del circulo es: %.2f",longitud); 
			break;
		case 'b':
			area=PI*radio*radio;
			printf("el area del circulo es : %.2f",area);
			break;
		case 'c':
			volumen=(4*radio*radio*radio*PI)/3;
			printf("el volumen de la esfera es : %f",volumen);
			break;
		
		default:
				printf("opcion no existente");
				
			
		}
	}

