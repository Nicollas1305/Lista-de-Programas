#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define SIZE 10

int i,
    sum,
    minus,
    array[SIZE];


int main(){

	setlocale(LC_ALL, "portuguese");

    printf("Entre com números para verificação: \n\n", SIZE);

    for(i=0,sum=0,minus=0;i<SIZE;i++){
        printf("Valor %d: ",i+1);
        scanf("%d",&array[i]);
		if(array[i]<0)
            minus++;
		if(array[i]>=0)
            sum=sum+array[i];
    }
    printf("\nSoma dos numeros positivos: %d   \nQuantidade de numeros negativos: %d", sum,minus);
    printf("\n\n");
    getch();
return(0);
}
