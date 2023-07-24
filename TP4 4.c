#include <stdio.h>
#include <math.h>
int main(){
	int notas[15];
	int i;
	int x;
	int notas_rep[11]={0};
	 for(i=0;i<15;i++){
		printf ("\n nota alumno %d: ",i+1);
		scanf ("%d",&notas[i]);
		x=notas[i];
		notas_rep[x]=notas_rep[x]+1;
     }
	 printf("\n notas repetidas: ");
	 for(i=0;i<11;i++){
		 printf("%d       %d\n",i,notas_rep[i]);
	 }
	 
	
}