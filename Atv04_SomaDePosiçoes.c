#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define SIZE 9

int i,
    x, y,
    array[SIZE];


int main(){

	setlocale(LC_ALL, "portuguese");

    printf("\nEntre com 8 valores...  \n");
    for(i=1;i<SIZE;i++){
        printf("Valor %d: ",i);
        scanf("%d", &array[i]);
    }

    printf("\n\nPosições a serem somadas: [1 - 8]\n-");
    scanf("%d", &x);
    printf("-");
    scanf("%d", &y);

    printf("\nResultado: %d + %d = %d", array[x], array[y], array[x]+array[y]);

    printf("\n\n");
    getch();
return(0);
}

