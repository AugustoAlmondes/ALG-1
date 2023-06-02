#include<stdio.h>

int main(){

int valor;

printf("Digite um valor\n");

    scanf("%i",&valor);

for(int i = 0; i <10 ; i++){

    printf("%i\n",valor);

    valor = valor + valor;
}

return 0;
}
