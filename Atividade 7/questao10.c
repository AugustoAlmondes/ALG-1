#include<stdio.h>
//10. Desenvolva um algoritmo que solicite números ao usuário, em seguida, deve ser impresso a
//quantidade de divisores que ele possui. Por exemplo, se for digitado 6, deverá ser impresso 4,
//pois seus divisores são (1, 2, 3 e 6). O algoritmo se encerra quando é digitado o valor -1, porém
//antes deverá ser impresso a quantidade de números primos digitados.


int main(){

    int i, num, m = 0, resto= 0, primos = 0;

    while(num != -1){

    printf("Digite um numero: \n");
    scanf("%i",&num);

    m = 0;

    for (i = 1; i < num +1; i++){
        resto = num%i;
        if(resto == 0){
            m = m + 1;
  }
  }
      if (m == 1 || m == 2){
        primos = primos +1;
      }
      printf("\ntotal de divisores: %i\n",m);

    }

printf("\no total de primos sao: %i\n",primos);

return 0;
}
