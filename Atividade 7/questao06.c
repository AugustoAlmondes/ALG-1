#include<stdio.h>

int main(){
int Sf,Sm;
char C;

Sf = 0;
Sm = 0;

 printf("\n F(feminino) \n M(masculino)\n @(finalizar)\n");
    do{

        printf("\n Digite o sexo: \n");
        scanf(" %c",&C);


        if(C == 'f' || C =='F'){

        Sf = Sf + 1;
        }

        if(C == 'm' || C =='M'){

        Sm = Sm + 1;
        }

    }  while(C != '@');

    printf("\nFinalizado:  \n %i",Sf);

    printf("\nFinalizado:  \n %i",Sm);


return 0;
}
