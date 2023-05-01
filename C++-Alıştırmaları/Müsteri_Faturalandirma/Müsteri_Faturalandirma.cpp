#include <stdio.h>
#include <conio.h>
main(){
     int tc,gun,ay,saat,islem;
     char ad,soyad,il,ilce,hastane,bolum,doktor;
     printf("Saglik Bakanligina Hosgeldiniz.\nGorusmelerimiz Kayit Altina Alinmaktadir.\nMuayene Icin 1'i Tuslayiniz:\nAsi Icin 2'yi Tuslayiniz:\n");
     scanf("%d",&islem);
     switch(islem){
     case 1:
  		printf("\nAdinizi Giriniz: ");
  		scanf("%s",&ad);
  		printf("\nSoyadinizi Giriniz: ");
  		scanf("%s",&soyad);
  		printf("\nKimlik Numaranizi Giriniz: ");
  		scanf("%d",&tc);
  		printf("\nIlinizi Giriniz: ");
  		scanf("%s",&il);
  		printf("\nHastaneyi (Ozel Devlet) seciniz: ");
  		scanf("%s",&hastane);
  		printf("\nBolumunuzu Seciniz: ");
  		scanf("%s",&bolum);
  		printf("\nDoktoru Seciniz: ");
  		scanf("%s",&doktor);
  		printf("\nAyi Giriniz: ");
  		scanf("%d",&ay);
  		if(ay <13){
  			printf("\nGunu Seciniz: ");
  		    scanf("%d",&gun);
  	        if(6 == 7 == 13 == 14 == 20 == 21 == 27 == 28 == gun){
  			    printf("\n saat i Seciniz: \n 11:00 13:00 15:00 17:00\n");
  			    scanf("%d",&saat);
			    printf("\nRandevunuz Olusturulmustur.\nAdý Soyadý: %s%s\nKimlik Numarasi: %d\nIli: %s\nHastane: %s\nBölümü: %s\nDoktor: %s\nAy: %d\nGun: %d\nSaat: %d",ad,soyad,tc,il,hastane,bolum,doktor,ay,gun,saat);	
	        	}
		    else if(gun > 32){
		    	printf("\nGecersiz Gun.");
		        }
		    else{
			    printf("\nSaati Seciniz: \n8:00 9:00 10:00 11:00 12:00 \n13:00 14:00 15:00 16:00 17:00\n");
		    	scanf("%d",&saat);
		    	printf("\nRandevunuz Olusturulmustur.\nAdý Soyadý: %s%s\nKimlik Numarasi: %d\nIli: %s\nHastane: %s\nBölümü: %s\nDoktor: %s\nAy: %d\nGun: %d\nSaat: %d",ad,soyad,tc,il,hastane,bolum,doktor,ay,gun,saat);	
	        	}
        	}
		else{
			printf("\nGecersiz Ay.");
		    }
  	    break;	
        }
   return 0;
}

