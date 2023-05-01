#include <stdio.h>
#include <conio.h>
main(){
  int a,b,c;
  printf("Acilari Giriniz.\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a==b==c){
     printf("Eskener Ucgendir");
  }
  else if(a==b & a==c & b==c){
  	printf("ikiz Kenar Ucgendir");
  }
  else{
  	printf("Cesit Kenar Ucgendir");
  }



}
