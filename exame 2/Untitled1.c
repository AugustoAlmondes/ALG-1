#include<stdio.h>
#define MAX 20

int main(){

int N[MAX];
int temp, j;

    for(int i = 0; i < MAX; i++){

        scanf("%i",&N[i]);

    }

       for(int i=0, j=19; i<10; i++, j--){
        temp=N[i];

        N[i]=N[j];

        N[j]=temp;

    }
    for( int i=0; i<MAX; i++){

        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
