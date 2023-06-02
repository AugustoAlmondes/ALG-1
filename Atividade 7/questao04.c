#include<Stdio.h>

int main(){

int v1, N, I;
int contador;
int produto = 1;
int ma, me = 0;

    printf("Digite um valor inteiro: ");
    scanf("%i",&v1);

    for(contador = 0; contador < v1; contador = contador +1){

        printf("Digite um numero: ");

        scanf("%i",&N);

        produto = produto * N;


            if(I==0){
                ma = N;
                me = N;
                I ++;
            } else if(N < me) {
                me = N;
            } else if(N > ma) {
                ma = N;

            }
    }

    printf("O produto eh: %i \n", produto);
    printf("O menor numero eh: %i \n", me);
    printf("O maior numero eh: %i \n", ma);
return 0;
}

