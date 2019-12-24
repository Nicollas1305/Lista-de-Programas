#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){

	setlocale(LC_ALL, "portuguese");

	int A[10], i, v, maior=0, pos=0;
	
	for(i=0; i<10; i++){
		printf("Entre com o valor %d:  ", v);
		scanf("%d", &A[i]);	
		v++;	
	}
	printf("\nVetor: ");
	for(i=0; i<10; i++){
		printf("[%d] ", A[i]);
	}
	for(i=0; i<10; i++){
		if(maior<A[i]){
			maior = A[i];
			pos++;
		}
	}
	printf("\n\nO maior valor é: %d, e está na posição: %d", maior, pos);
}
