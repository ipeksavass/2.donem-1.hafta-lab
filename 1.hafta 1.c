#include <stdio.h>
#define size 100

int hesapla(int,int);
int main(){
	int ogrSay,puan;
	printf("ogrenci sayisini giriniz:");
	scanf("%d",&ogrSay);
	printf("gecme notu belirleyiniz:");
	scanf("%d",&puan);
	printf("kalan ogrenci sayisi:%d",hesapla(ogrSay,puan));
	return 0;
	
}

int hesapla(int ogr,int puan){
	int a[size],i,k,sum=0;
	for(i=0,k=0;i<ogr;i++){
		printf("%d. ogrencinin notu=",i+1);
		scanf("%d",&a[i]);
		if(a[i]<puan){
			k++;
		}
		sum+=a[i];
	}
	printf("ogrencilerin not ortalamasi=%d\n",sum / ogr);
	return k;
}
