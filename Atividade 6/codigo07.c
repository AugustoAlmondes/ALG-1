#include<stdio.h>
#define num 10
int main(){

    int numero[num];
    int maior, menor, vmaior, vmenor,  a;

printf("Digite 10 numeros: \n");

for(int i= 0; i <num; i++){


    scanf("%i",&numero[i]);

    if(a == 0){
    maior = numero[0];
    menor = numero[0];
    a++;
    }else if(numero[i] < menor) {
                menor = numero[i];
            } else if(numero[i] > maior) {
                maior = numero[i];
            }
}

for(int i= 0; i <num; i++){
            printf("Vetor[%i]: %i\n",i ,numero[i]);
}

printf("\nMaior = %i\n",maior);
printf("\nMenor = %i\n",menor);
printf("\n");
printf("\nInverter Valores\n");

a = maior;
maior = menor;
menor = a;
    for(int i = 0; i<num; i++){

        if(numero[i]== menor){
            numero[i] = maior;
        } else if (numero[i]== maior){
            numero[i] = menor;
        }
       printf("Vetor[%i]: %i\n",i ,numero[i]);


    }
return 0;
}
