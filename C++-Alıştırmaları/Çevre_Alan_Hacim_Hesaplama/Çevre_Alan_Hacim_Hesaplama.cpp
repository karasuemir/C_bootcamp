#include <stdio.h>
#include <conio.h>
int main(){
	float r,h;
	const float pi = 3.14;
	float cevre,alan,hacim;
	printf("Yari Capini Giriniz:");
	scanf("%f",&r);
	cevre = (2*pi*r);
	printf("Yuksekligini Giriniz:");
	scanf("%f",&h);
	alan = ((2*pi*(r*r))+(2*pi*r*h));
	hacim = (pi*(r*r)*h);
	printf("Cevresi: %.2f\n",cevre);
	printf("Alani: %.2f\n",alan);
	printf("Hacim: %f.2\n",hacim);
	getch();
}
