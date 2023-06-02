#include <stdio.h>
int main()
{
 char c[50];

 int i;

 i = 0;

 printf("Digite uma palavra:\n");

scanf("%[^\n]s", &c);

while(c[i] != '\0'){


    if(c[i]=='r'){
        c[i] = 'l';
    } else if (c[i]=='R'){
        c[i] = 'L';
    }

    printf("%c",c[i]);
    i++;
}

    return 0;
}

