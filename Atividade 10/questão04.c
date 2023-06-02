#include<stdio.h>

int menor2(int x, int y){

    int menor;

    if(x > y){
        menor = y;
    }else{
        menor = x;
}
    return menor;
}

int main(){
    int a, b;

    printf("Digite o Primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o Segundo numero: ");
    scanf("%d",&b);

    printf("O menor valor eh: %d\n", menor2(a,b));
}
