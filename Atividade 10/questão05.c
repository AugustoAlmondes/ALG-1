//05) Faça a função menor3 que recebe 3 números e retorna o menor valor, reutilize a
//função menor2 nessa função. Faça um programa para ler 3 números e utilizar a
//função menor3.
#include<stdio.h>


int a, b, c;

int menor3();

int main(){

    int menor;

    printf("\nDigite o primeiro numero: ");
        scanf("%i",&a);
    printf("\nDigite o segundo numero: ");
        scanf("%i",&b);
    printf("\nDigite o terceiro numero: ");
        scanf("%i",&c);

        menor = menor3();

        printf("\nO menor numero eh: %i\n", menor);
}

int menor3(){

int m;

    if(a <= b && a <=c){
        m = a;
    } else if (b <= a && b <= c){
        m = b;
    } else if (c <= a && c <= b){
        m = c;
    }
        return m;
}
