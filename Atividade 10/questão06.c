#include<stdio.h>

int primo(int x) {

    int q = 0;
    int r;

    for (int i = 1; i <= x; i++){
        if (x % i == 0){
            q++;
        }
    }
        if (q == 2){
            r = 1;
        } else {
            r = 0;
        }
    return r;
}
int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

        for (int i = 1; i < n; i++){
            if(primo(i) == 1){
                printf("%d\n", i);
            }
        }

}
