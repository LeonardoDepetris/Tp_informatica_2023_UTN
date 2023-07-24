#include <stdio.h>
#include <math.h>
int main(){
	int notas[10];
	int cam;
	int i;
	int j;
	
	for(i=0;i<10;i++){
		printf ("\n notas %d: ",i+1);
		scanf ("%d",&notas[i]);
	}
	printf("\n numeros ordenados de menor a mayor: ");
	
	for( j=0;j<10;j++){
		for(i=0;i<10;i++){
			if(notas[i]<notas[i+1]){
				cam=notas[i+1];
				notas[i+1]=notas[i];
				notas[i]=cam;
				}
			}
				
		}
		for(j=0;j<10;j++){
		printf("\n nota %d: %d",j+1,notas[j]);
		}
	}