#include<stdio.h>

    long long fibonacciVetor( int nEsimoTermo );

   int n, primeiro = 0, segundo = 1, prox, c;
   int i,j;

int main(){

int B, nEsimoTermo;

   scanf("%d", &j);

   B = fibonacciVetor( nEsimoTermo );

          printf("Fib(%lld) = %lld\n",n-1, B);
   }

long long fibonacciVetor( int nEsimoTermo ){


 for(i=1; i<=j; i++, primeiro = 0, segundo = 1){

       scanf("%lld",&n);

       n=n+1;

       for ( c = 0 ; c < n ; c++ ){

          if (c <= 1){

            nEsimoTermo = c;

          }else{

             nEsimoTermo = primeiro + segundo;
             primeiro = segundo;
             segundo = nEsimoTermo;

          }
       }

}
        return nEsimoTermo;
}
