#include <stdio.h>

int main (){

int A, M, B, R;

printf("Digite o valor de A: \n");
    scanf("%i",&A);
printf("Digite o valor de B: \n");
    scanf("%i",&B);
M = 1;
 for(R = 0; R < B; R = R +1){

    M = M * A;

        printf("\nValor %i \n",M);
    }
return 0;
}
