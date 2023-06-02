#include <stdio.h>
#define MAX 12
int main() {
    int c, i, j;
    char a;
    double m[MAX][MAX], s;

    scanf("%i", &c);
    scanf(" %c", &a);

    for (i = 0; i < MAX; i++) {

        for (j = 0; j < MAX; j++) {

            scanf("%lf", &m[i][j]);

            if (j == c)
                s = s + m[i][c];

        }
    }
    if (a == 'M')
        s /= MAX;

    printf("%.1f\n", s);

    return 0;
}
