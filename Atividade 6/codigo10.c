#include <stdio.h>
#define max 100

int main(){

    double vetor[max];
    int i;

    printf("Digite o valor a ser dividido pela metade\n");;
    scanf("%lf",&vetor[0]);

    printf("N[0] = %.4lf\n",vetor[0]);

    for(i = 1; i <max; i++){

             vetor[i] = vetor[i-1]/2.0;

        printf("N[%i] = %.4lf\n",i , vetor[i]);

    }

return 0;
}
