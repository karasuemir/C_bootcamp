#include <stdio.h>  kýlavyeden girilen 2 deðerin ortalamasýný alan programý yazýnýz
#include <conio.h>
int main(){
 int a,b;
 float ort;
 printf("Birinci Degeri Giriniz:");
 scanf("%d",&a);
 printf("Ikinci Degeri Giriniz:");
 scanf("%d",&b);
 ort =(a+b)/2.0;
 printf("Degerlerin Ortalamasi:%.2f",ort);	
	
	return 0;
}
