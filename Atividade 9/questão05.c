#include<stdio.h>

struct Data{
int ano;
int mes;
int dia;
};

int main(){

struct Data data1, data2;

int soma1, soma2, diferenca;

printf("Digite a primeira Data: ");
scanf("%i %i %i",&data1.dia, &data1.mes, &data1.ano);
printf("Digite a segunda Data: ");
scanf("%i %i %i",&data2.dia, &data2.mes, &data2.ano);

    soma1 = (data1.ano * 365) + (data1.mes * 30) + data1.dia;
    soma2 = (data2.ano * 365) + (data2.mes * 30) + data2.dia;


    if( soma1 >= soma2){
        diferenca = soma1 - soma2;
    } else if (soma1 <= soma2){
        diferenca = soma2 - soma1;
    }

    printf("\nDiferenca eh: %i\n",diferenca);

    if(diferenca < 40){
        printf("A diferenca eh: %i",diferenca);
    } else {
        printf("ultrapassa quarentena!\n");
    }
    
}
