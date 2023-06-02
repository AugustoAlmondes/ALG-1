#include<stdio.h>
//Crie um algoritmo que receba a idade a opini�o de N espectadores e mostre
//a porcentagem de pessoas em cada opini�o e a m�dia da
//idade das pessoas em cada opini�o.

int main(){

float n2, i1, i2, i3, p1, p2, p3, n, soma1, soma2, soma3, somat, m1, m2, m3;
char op;

i1 = 0.0;
soma1 = 0.0;
do{
    printf("\n (4) para finalizar \n");
    printf("\n (3) excelente \n");
    printf("\n (2) bom \n");
    printf("\n (1) regular \n");

  printf("\n Digite sua idade: ");

        scanf("  %f",&n2);

    printf("\n Digite um dos numeros acima: ");
        scanf("   %c",&op);


switch(op){

case '1':
    soma1 = soma1 + 1;

    i1 = i1 + n2;

    m1 = i1/soma1;

    printf("\n--------------------------\n");
    printf("\nIdade 1: %.2f\n",i1);
    printf("\nsoma 1: %f\n",soma1);
    printf("\nmedia 1: %.2f\n",m1);
    printf("\n--------------------------\n");

break;

case '2':
    soma2 = soma2 + 1;

    i2 = i2 + n2;

    m2 = i2/soma2;

    printf("\n--------------------------\n");
    printf("\nIdade 2: %.2f \n",i2);
    printf("\nsoma 2: %f \n",soma2);
    printf("\nmedia 1: %.2f\n",m2);
    printf("\n--------------------------\n");

break;

case '3':
    soma3 = soma3 + 1;

    i3 = i3 + n2;

    m3 = i3/soma3;

    printf("\n--------------------------\n");
    printf("\nIdade 3: %.2f \n",i3);
    printf("\nsoma 3: %f\n",soma3);
    printf("\nmedia 1: %f.2\n",m3);
    printf("\n--------------------------\n");
break;



default:

printf("\nTente Novamente\n");

}
}  while (op != '4');

printf("\n------------------------\n");
printf("Finalizado");
printf("\n------------------------\n");
somat = soma1 + soma2 + soma3;

p1 = soma1/somat;

p2 = soma2/somat;

p3 = soma3/somat;

printf("Total de pessoas intrevistadas: ");
printf("\nporcentagem 1: %f\n",p1*100);


printf("\nporcentagem 2: %f\n",p2*100);


printf("\nporcentagem 3: %f\n",p3*100);
return 0;
}
