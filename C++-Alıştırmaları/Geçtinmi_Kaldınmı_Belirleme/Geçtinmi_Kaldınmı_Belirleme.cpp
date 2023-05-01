#include <stdio.h>

int main() {
   int note;
   printf("Notunuzu Giriniz:");
   scanf("%d",&note);
   if(note >= 60){
     printf("Dersten Gectiniz");
   }
    else{
     printf("Dersten Kaldiniz");
	}
	return 0;
}	
