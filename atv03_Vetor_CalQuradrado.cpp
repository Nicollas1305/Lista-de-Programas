#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char num[10], num2[10], i=0;	 

	for(i=0; i<10; i++){
		printf("Entre com um n�mero real:  ");
		scanf("%d", &num[i]);
	}
	strcpy(num2, num);
	printf("\nN�meros do vetor:\n");	
	for(i=0; i<10; i++){
	printf("[%d] ", num2[i]);
	}
	printf("\n\n");
	printf("\nN�meros ao quadrado:\n");
	for(i=0; i<10; i++){
	printf("[%d] ", num[i]*num[i]);
	}


}
