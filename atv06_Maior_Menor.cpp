#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){

	setlocale(LC_ALL, "portuguese");

	int A[10], i, v, maior=0, menor=1000;
	
	for(i=0; i<10; i++){
		printf("Entre com o valor %d:  ", v);
		scanf("%d", &A[i]);	
		v++;	
	}
	for(i=0; i<10; i++){
		if(menor>A[i]){
			menor = A[i];
		}
		if(maior<A[i]){
			maior = A[i];
		}
		
	}
	printf("\nO menor valor é:  %d", menor);
	printf("\nO maior valor é:  %d", maior);
}
	
