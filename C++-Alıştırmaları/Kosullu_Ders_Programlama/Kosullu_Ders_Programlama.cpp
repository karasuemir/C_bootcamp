#include <stdio.h>
#include <conio.h>
main(){
	int a,b;
	float vize,final,ortalama;
	printf("Vize Notunuzu Giriniz:");
	scanf("%d",&a);
	printf("Final Notunuzu Giriniz:");
	scanf("%d",&b);
	vize = a*40/100;
	final = b*60/100;
	ortalama = vize + final;
    if(b>50 | ortalama>60){
    	printf("Dersten Gectiniz.");
	}	
	else{
		printf("Dersten Kaldiniz.");
	}
	getch();
}
