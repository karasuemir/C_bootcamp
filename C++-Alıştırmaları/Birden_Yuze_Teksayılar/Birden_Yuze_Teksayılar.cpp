#include <stdio.h>
#include <conio.h>
main(){
	int a;
	for(a=0;a<100;a++){
		if(a%2==0){
			continue;
		}
		else{
			printf("%d",a);
		}
	}
		
}
