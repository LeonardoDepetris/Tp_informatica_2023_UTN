#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char pal[20];
	char enc[20];
	int j;
	int k;
	
	printf ("\n palabra: ");
	scanf ("%s",pal);
	j=strlen(pal);
	
	for(k=0;k<=j;k++){
		enc[k]=pal[k]+3;
	}
     printf("%s",enc);
}
