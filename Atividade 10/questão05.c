//05) Fa�a a fun��o menor3 que recebe 3 n�meros e retorna o menor valor, reutilize a
//fun��o menor2 nessa fun��o. Fa�a um programa para ler 3 n�meros e utilizar a
//fun��o menor3.
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
