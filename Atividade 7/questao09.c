#include <stdio.h>
#include <stdlib.h>
int main(){
    float n1=0, n2=0, n3=0, Me, MT, P, Soma;
    float i=1.0,AP=0.0;
    for(i=1;i<=20; i++){

        printf("Digite a primeira nota: \n");
        scanf("%f", &n1);

        printf("Digite a segunda nota: \n");
        scanf("%f", &n2);

        printf("Digite a terceira nota: \n");
        scanf("%f", &n3);
        Me= (n1+n2+n3);
        Me=(Me/3);
        printf("Media do aluno %.2f\n", Me);

                if(Me>7.0){
                AP = AP + 1;
                }
                    Soma=(Soma+Me);
                    }
                    MT = (Soma/20);
                    P=(AP/20);
                    P = P * 100;

    printf("Acima de 7: %.2f\n", AP);
    printf("Media da turma: %.2f\n", MT);
    printf("Percentual de alunos com media acima de 7: %.2f\n", P);
    return 0;
}
