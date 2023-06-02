#include<stdio.h>
#include<math.h>

int potencia(int x, int n);

int main() {
    int n, x;
    int result;

    scanf("%d %d", &x, &n);

    result = potencia(x, n);

    printf("resultado: %d\n", result);

}
int potencia(int x, int n){

        int result;
        result = pow(x,n);

    return result;
}

