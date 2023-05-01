#include <stdio.h>
#include <conio.h>
main(){
	int a,b;
	printf("a yi giriniz:");
	scanf("%d",&a);
	printf("b yi giriniz:");
	scanf("%d",&b);
	if(a>b){
		printf("a Buyuktur b den");
	}
	else if(a==b){
		printf("a Esittir b ye");
	}
	else{
		printf("a kucuktur b den");
	}
	getch();
}
