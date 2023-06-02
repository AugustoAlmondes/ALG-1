#include <stdio.h>
#include <stdlib.h>

int main (){

int vetor[12];
int soma, X, Y;

    printf("\nDigite os valores\n");

for(int i = 0; i < 12; i++){

    scanf("%i",&vetor[i]);

}
    printf("\nDigite as posicoes: \n");

    scanf("%i",&X);

    scanf("%i",&Y);

        if((X < 12) && (Y < 12)){

    soma = vetor[X] + vetor[Y];

    printf("\nSOMA = %i\n",soma);

        } else {
            printf("\nDIGITE NUMEROS MENORES QUE 12!!\n");
        }

return 0;
}
