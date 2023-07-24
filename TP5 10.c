#include <stdio.h>
#include <math.h>
#include <string.h>

int taka(int d,int m,int a){
	int dia;
	printf("\n dia: ");
	scanf ("%d",&d);
	printf("\n mes: ");
	scanf ("%d",&m);
	printf("\n año: ");
	scanf ("%d",&a);
	
	if(a%4!=0){
	if(m==1){
		dia=d;
	}
	if(m==2){
		dia=d+31;
	}
	if(m==3){
		dia=d+59;
	}
	if(m==4){
		dia=d+90;
	}
	if(m==5){
		dia=d+120;
	}
	if(m==6){
		dia=d+151;
	}
	if(m==7){
		dia=d+181;
	}
	if(m==8){
		dia=d+212;
	}
	if(m==9){
		dia=d+243;
	}
	if(m==10){
		dia=d+273;
	}
	if(m==11){
		dia=d+304;
	}
	if(m==12){
		dia=d+334;
	}
	}
	if(a%4==0 && a%100!=0){
	if(m==1){
		dia=d;
	}
	if(m==2){
		dia=d+31;
	}
	if(m==3){
		dia=d+60;
	}
	if(m==4){
		dia=d+91;
	}
	if(m==5){
		dia=d+121;
	}
	if(m==6){
		dia=d+152;
	}
	if(m==7){
		dia=d+182;
	}
	if(m==8){
		dia=d+213;
	}
	if(m==9){
		dia=d+244;
	}
	if(m==10){
		dia=d+274;
	}
	if(m==11){
		dia=d+305;
	}
	if(m==12){
		dia=d+335;
		}
	}
	printf("\n el dia es: %d",dia);
	return d;
}
	int main (void){
		int d,m,a;
		taka(d,m,a);
	}