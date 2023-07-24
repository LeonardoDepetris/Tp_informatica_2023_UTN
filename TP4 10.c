#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char n[100];
	int i;
	int j;
	//int aux;
	
		printf ("\n palabra: ");
		scanf ("%s",n);
		j=strlen(n);
		for(i=j;i>=0;i--){
		   printf("%c",n[i]);
		}
	}