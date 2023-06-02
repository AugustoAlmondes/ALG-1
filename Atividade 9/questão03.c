#include<stdio.h>

struct Produtos{
char nome[20];
float preco;
int codigo;
};

    void main(){

        char nome1;
        float preco1;
        int cp, n;

    scanf("%i", &n);

struct Produtos produtos[n];

    for(int i = 0; i < n; i++){

            printf("\nDigite o nome do produto: ");
        scanf("%s",produtos[i].nome);
            printf("\nDigite o codigo do produto: ");
        scanf("%i",&produtos[i].codigo);
            printf("\nDigite o preco do produto: ");
        scanf("%f",&produtos[i].preco);
    }

        printf("\nDigite o codigo do produto especifico: \n");

        scanf("%i",&cp);

    for(int i = 0; i <= n; i++){

        if(produtos[i].codigo == cp){

            printf("Nome do produto: %s\n",produtos[i].nome);
            printf("O preco eh: R$%.2f\n",produtos[i].preco);
            return 0;
        }
    }
printf("Codigo invalido\n");
    }
