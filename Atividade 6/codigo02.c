
#include <stdio.h>

int main()
{
 char c[40];

 int i, cont, q;

 i = 0;

 printf("Digite uma palavra\n");

    scanf("%[^\n]s",c);

  for(i = 0; c[i]!= '\0'; i++){

         if(c[i]>=97 &&c[i]<=122){

        printf("%c",c[i]- 32);
        }
   }
    return 0;
}
