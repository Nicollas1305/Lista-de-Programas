#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num[10], i, A=0;	 

	for(i=1;i<11;i++){
	 printf("Entre com o número %d:  ", i);
	 scanf("%d",&num[A]);
		
		if ((num[A] % 2)==0){
		A++;
		}
	}
	
		
	printf("\nNúmeros pares: %i", A);
	
	return 0;
}
