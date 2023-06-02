#include <stdio.h>
#define MAX 12
int main() {

    double m[MAX][MAX], acc = 0;
    int coluna, linha, cont = 0;
    char O;


    scanf("%c", &O);

    for (linha = 0; linha < MAX; linha++) {

        for (coluna = 0; coluna < MAX; coluna++) {

            scanf("%lf", &m[linha][coluna]);

                if (coluna < linha){
                    acc = acc + m[linha][coluna];
                }
        }
    }
    if (O == 'M'){
        acc /= MAX;

    printf("%.11f\n", acc);
    }
    if ( O == 'S'){
        printf("%.1lf\n",acc);
    }
    return 0;
}

