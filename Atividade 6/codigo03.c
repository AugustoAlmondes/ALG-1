#include<stdio.h>
#include<string.h>

//ados os vetores p e a que representam, respectivamente, o peso e a altura de 30
//pessoas, calcular o IMC para cada pessoa, sabendo que IMC = p/(a*a)


int main(){

float p[30];
float a[30];
float IMC;

for(int i = 0; i< 30; i++){

     printf("\nDigite a altura\n");

    scanf("%f",&a[i]);

     printf("\nDigite o peso\n");

    scanf("%f",&p[i]);

  IMC = a[i]*a[i];
  IMC = p[i]/IMC;

  printf(" O IMC eh: %.2f\n",IMC);
}


return 0;
}

