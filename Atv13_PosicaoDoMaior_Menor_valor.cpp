#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");

	int i, a=1, val[5], pma, pme, maior=0, menor=1000;
	
	for(i=1; i<6; i++){
	printf("\nEntre com o valor, posi��o %d:  ", a);
	scanf("%d", &val[i]);
		a++;
		if(maior < val[i]) {
			maior = val[i];
			pma = i;
		}	
		if(menor > val[i]){
			menor = val[i];
			pme = i;
			
		}
	}
	
	printf("\nO maior valor �: %d,  est� localizado na posi��o: %d", maior, pma);
	printf("\nO menor valor �: %d,  est� localizado na posi��o: %d", menor, pme);
}
