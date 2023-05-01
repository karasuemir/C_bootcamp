#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
     int kn,Gun,Ay,Saat,Islem;
     char Ad,Soyad,Il,Hastane,Bolum,Doktor;
     printf("Saglik Bakanligina Hosgeldiniz.\nGorusmelerimiz Kayit Altina Alinmaktadir.\nMuayene Icin 1'i Tuslayiniz:\nAsi Icin 2'yi Tuslayiniz:\n");
     scanf("%d",&Islem);
     switch(Islem){
     case 1:
  		printf("\nAdinizi Giriniz: ");
  		scanf("%s",&Ad);
  		printf("\nSoyadinizi Giriniz: ");
  		scanf("%s",&Soyad);
  		printf("\nKimlik Numaranizi Giriniz: ");
  		scanf("%d",&kn);
  		printf("\nIlinizi Giriniz: ");
  		scanf("%s",&Il);
  		printf("\nHastaneyi (Ozel Devlet) seciniz: ");
  		scanf("%s",&Hastane);
  		printf("\nBolumunuzu Seciniz: ");
  		scanf("%s",&Bolum);
  		printf("\nDoktoru Seciniz: ");
  		scanf("%s",&Doktor);
  		printf("\nAyi Giriniz: ");
  		scanf("%d",&Ay);
  		if(Ay <13){
  			printf("\nGunu Seciniz: ");
  		    scanf("%d",&Gun);
  		    if(6 == Gun || 7 == Gun || 13 == Gun || 14 == Gun || 20 == Gun || 21 == Gun || 27 == Gun || 28 == Gun){
  			    printf("\nsaat i Seciniz: \n11:00 13:00 15:00 17:00\n");
  			    scanf("%d",&Saat);
			    printf("\nRandevunuz Olusturulmustur.");	
	        }
	         else if(Gun > 32){
		    	printf("\nGecersiz Gun.");
		    }
		    else{
			    printf("\nSaati Seciniz: \n8:00 9:00 10:00 11:00 12:00 \n13:00 14:00 15:00 16:00 17:00\n");
		    	scanf("%d",&Saat);
		    	printf("\nRandevunuz Olusturulmustur.");	
	        }
  	    }
  	    else{
			printf("\nGecersiz Ay.");
		}
		break;
	case 2:
		printf("\nAdinizi Giriniz: ");
  		scanf("%s",&Ad);
  		printf("\nSoyadinizi Giriniz: ");
  		scanf("%s",&Soyad);
  		printf("\nKimlik Numaranizi Giriniz: ");
  		scanf("%d",&kn);
  		printf("\nIlinizi Giriniz: ");
  		scanf("%s",&Il);
		printf("\nAyi Giriniz: ");
  		scanf("%d",&Ay);
  		if(Ay <13){
  			printf("\nGunu Seciniz: ");
  		    scanf("%d",&Gun);
  		    if(6 == Gun || 7 == Gun || 13 == Gun || 14 == Gun || 20 == Gun || 21 == Gun || 27 == Gun || 28 == Gun){
  		    	printf("\nsaat i Seciniz: \n11:00 11:15 11:30 11:45\n13:00 13:15 13:30 13:45\n15:00 15:15 15:30 15:45\n");
  			    scanf("%d",&Saat);
			    printf("\nRandevunuz Olusturulmustur.");
					
	        }
	         else if(Gun > 32){
		    	printf("\nGecersiz Gun.");
		    }
		    else{
		    	printf("\nsaat i Seciniz: \n09:00 09:15 09:30 09:45\n10:00 10:15 10:30 10:45\n11:00 11:15 11:30 11:45\n12:00 12:15 12:30 12:45\n13:00 13:15 13:30 13:45\n14:00 14:15 14:30 14:45\n15:00 15:15 15:30 15:45\n16:00 16:15 16:30 16:45\n");
  			    scanf("%d",&Saat);
		    	printf("\nRandevunuz Olusturulmustur.");	
	        }
  	    }
  	    else{
			printf("\nGecersiz Ay.");
		}
		break;		
   }
   return 0;
}
