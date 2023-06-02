#include <stdio.h>
#include <math.h>

float x1, x2;
int raizes;

        void calculaRaizes(int a, int b, int c){

        float valor, delta;
        float raiz = 0;

            delta = pow(b,2);
            delta = delta - (4 * a * c);

        if((delta < 0)){
            printf("\n!!! Valor inexistente !!!\n");
        } else{
            raiz = sqrt(delta);
            x1 = -b + raiz;
            x2 = -b - raiz;

            x1 = x1/(2 * a);
            x2 = x2/(2 * a);
        }
            if(delta < 0){
                raizes = 1;
            } else if(delta == 0){
                raizes = 2;
            } else if( delta > 0){
                raizes = 3;
            }
    }
int main(){

    float X1, X2, a, b, c;

    printf("Digite o valor de a: ");
        scanf("%f",&a);

    printf("Digite o valorde b: ");
        scanf("%f",&b);

    printf("Digite o valor de c: ");
        scanf("%f",&c);

    calculaRaizes( a, b, c);

        printf("\nRaiz 1 %.2f\n",x1);
        printf("\nRaiz 2 %.2f\n",x2);

                switch(raizes){
                    case 1 :
                        printf("\nNenhuma raiz\n");
                            break;
                    case 2:
                        printf("\nApenas uma raiz\n");
                            break;
                    case 3:
                        printf("\nDuas raizes\n");
                            break;
                    default:
                        printf("\n");
                            break;
                }
return 0;
}

