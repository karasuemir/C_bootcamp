#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void Toplama(void);
void Cikarma(void);
void Carpma(void);
void Bolme(void);
main(){
	int islem;
	printf("Yaptirilacak Olan Islemi Seciniz;\n1 = Toplama\n2 = Cikarma\n3 = Carpma\n4 = Bolme\n");
	scanf("%d",&islem);
	switch(islem){
		case 1:
			system("cls");
			Toplama();
			break;
		case 2:
			system("cls");
			Cikarma();
			break;
		case 3:
			system("cls");
			Carpma();
			break;
		case 4:
			system("cls");
			Bolme();
			break;
	}
}
void Toplama(void){
	int a,b,toplam;
	printf("Birinci Degeri Giriniz.");
	scanf("%d",&a);
	printf("ikinci Degeri Giriniz.");
	scanf("%d",&b);
	toplam = a + b ;
	printf("Toplama isleminin sonucu: %d",toplam);
}
void Cikarma(void){
	int a,b,cikarma;
	printf("Birinci Degeri Giriniz.");
	scanf("%d",&a);
	printf("ikinci Degeri Giriniz.");
	scanf("%d",&b);
	cikarma = a - b ;
	printf("Cikarma isleminin sonucu: %d",cikarma);
}
void Carpma(void){
    int a,b,carpma;
	printf("Birinci Degeri Giriniz.");
	scanf("%d",&a);
	printf("ikinci Degeri Giriniz.");
	scanf("%d",&b);
	carpma = a * b ;
	printf("Carpma isleminin sonucu: %d",carpma);
}
void Bolme(void){
    int a,b,bolme;
	printf("Birinci Degeri Giriniz.");
	scanf("%d",&a);
	printf("ikinci Degeri Giriniz.");
	scanf("%d",&b);
	bolme = a / b ;
	printf("Bolme isleminin sonucu: %d",bolme);
}

