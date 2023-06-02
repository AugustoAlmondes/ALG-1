#include <stdio.h>

int main(){

float N1, N2, S, M;
char L;

L = 'X';

printf("------------------------- \n");
printf("           MENU          \n");
printf("------------------------- \n");

printf("\n A - Maior Numero \n");
printf("\n B - Menor Numero \n");
printf("\n C -  Media Aritimedica \n");
printf("\n D - Finalizar \n");

do{

        printf("\n Digite o primeiro numero: \n");
            scanf("%f",&N1);
        printf("\n Digite o segundo numero: \n");
            scanf("%f",&N2);
        printf("\n Digite uma das letras acima: \n");
            scanf(" %c",&L);

           if(L =='A'){
                if (N1 > N2){
                    printf ("O maior numero eh: %f", N1);
                } else {
                    printf("O maior numero eh: %f", N2);
                }
           }
            if(L =='B'){
                if (N1 < N2){
                    printf ("O menor numero eh: %f", N1);
                } else {
                    printf("O menor numero eh: %f", N2);
                }
           }
             if(L =='C'){
                    M = N1 + N2;
                    M = M/2;
                    printf ("A media eh: %f", M);
           }


    }while (L != 'D');
        printf("\n Finalizado \n");


return 0;
}
