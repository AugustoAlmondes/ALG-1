#include<stdio.h>

int main(){

int i = 0;
char c[30];

scanf("%[^\n]s", &c[i]);

for(i = 0; c[i]!='\0';i++){

printf("%c ",c[i]);

}
return 0;
}
