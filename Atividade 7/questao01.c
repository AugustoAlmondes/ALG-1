#include<stdio.h>

int main(){
    int  M;

    printf("Digite: \n");
    scanf("%i",&M);

while(M>0){
    if(M%2 == 0){
        printf("O numero e par %i \n",M%10);
        M = M/10;
    } else {
    }    printf("O numero e impar %i \n",M%10);
         M = M/10;
}
return 0;
}
