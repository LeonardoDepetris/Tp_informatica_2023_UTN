#include <stdio.h>
#include <math.h>
 
 int main (){
	 int i;
	 int b;
	int mayor;
	int menor;
	 
	 for(i=0; i<5; i++){
		 printf ("\n El valor:");
		 scanf  ("%d", & b);
		
		 if (i==0){
			 mayor=b;
			 menor=b;
		 }
		 else {
			 if (b>mayor) {
				 mayor=b;}
			 else {
					 if (b<menor){
				 
			 {menor=b;}}
			 }		 
		 }
		 
	 }printf("\n numero mayor es: %d",mayor);
	 printf("\n numero menor es: %d",menor);
     }