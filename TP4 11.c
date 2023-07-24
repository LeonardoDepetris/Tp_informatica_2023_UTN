#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char n[100];
	char v[10]={'a','e','i','o','u','A','E','I','O','U'};
	int i;
	int p;
	int j;
	int con=0;
	
	printf ("\n palabra: ");
	scanf ("%s",n);
	j=strlen(n);
	
	for(i=0;i<=9;i++){
	for(p=0;p<=j;p++){
		if(n[p]==v[i]){
			con++;
		}
	}
}
	printf("cantidad de vocales= %d",con);

}