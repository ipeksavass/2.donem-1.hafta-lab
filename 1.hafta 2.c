#include <stdio.h>
int indexHesapla (float,float);
int main(){
	float boy,kilo;
	printf("lutfen boyunuzu giriniz:");
	scanf("%f",&boy);
	printf("lutfen kilonuzu giriniz:");
	scanf("%f",&kilo);
	switch(indexHesapla(boy,kilo)){
		case(1):
			printf("ZAYIF");
			break;
		case(2):
			printf("NORMAL");
			break;
		case(3):
			printf("KILOLU");
			break;
		case(4):
			printf("OBEZ");
			break;
	}
	
	return 0;
}

int indexHesapla(float boy,float kilo){
	int index;
	index= kilo / (boy * boy);
	
	if(index<=18)
		return 1;
	else if(index<=25)
		return 2;
	else if (index<=30)
		return 3;
	else
		return 4;
	
}
