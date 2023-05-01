#include <iostream>
#include <conio.h>
main(){
	int a,b,c,d,e,Basari_Notu;
	float  vize,final,ortalama,odev,kisasinav1,kisasinav2;
	printf("Vize Notunuzu Giriniz:");
	scanf("%d",&a);
	vize = a*24/100;
	printf("1.Kisa Sinav Notunuzu Giriniz:");
	scanf("%d",&b);
	kisasinav1 = b*4/100;
	printf("2.Kisa Sinav Notunuzu Giriniz:");
	scanf("%d",&c);
	kisasinav2 = c*4/100;
	printf("Odev Notunuzu Giriniz:");
	scanf("%d",&d);
	odev = d*8/100;
	printf("Final Notunuzu Giriniz;");
	scanf("%d",&e);
	final= e*60/100;
	Basari_Notu = vize + kisasinav1 + kisasinav2 + odev + final;
	printf("Basari notu:%d",Basari_Notu);
	getch();
}
