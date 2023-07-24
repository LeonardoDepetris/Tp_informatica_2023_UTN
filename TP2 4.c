#include <stdio.h>
#include <math.h>
 
 int main (){
	 int a=1;
	 int b=1;
	 int n;
	 printf ("\n introduzca el numero a factorear: ");
	 scanf ("%d", & n);
	 for (a=1; a<=n; a++){
		 b=a*b;
	 }
	 printf ("\n el factorial es: %d \n",b);
	 return 0;
 }
