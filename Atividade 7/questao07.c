#include<stdio.h>

int main(){
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584,...
//2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765....
int soma, soma2, cont;
soma = 1;
soma2 = 1;

for(cont = 0; cont<18; cont = cont +1){

    soma2 = soma + soma2;
    soma = soma2 - soma;

    printf("  %i", soma2);
}
return 0;
}
