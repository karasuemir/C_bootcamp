#include <stdio.h>  k�lavyeden girilen 2 de�erin ortalamas�n� alan program� yaz�n�z
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
