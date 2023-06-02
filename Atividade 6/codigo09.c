#include <stdio.h>

int main(){

int num, i, r;
int a=0, b=1;

unsigned long int f = 0;

scanf("%i",&r);

while (i < r-1){
    scanf("%i", &num);
    i++;

  for(i = 0; i < num-1;i++){
    f = a + b;

    a = b;

    b = f;

  }
  printf("Fib[%i] = %i\n", num, f);
  a=0;
  b=1;
  f = 0;
}

return 0;
}
