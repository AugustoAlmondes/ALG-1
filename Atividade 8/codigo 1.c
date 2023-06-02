#include <stdio.h>
#define MAX
int main() {
    int l, i, j;
    char a;
    double m[MAX][MAX], s;

    scanf("%i", &l);
    scanf(" %c", &a);

    for (i = 0; i < MAX; i++) {

        for (j = 0; j < MAX; j++) {

            scanf("%lf", &m[i][j]);

            if (i == l)
                s = s + m[l][j];

        }
    }
    if (a == 'M')
        s /= MAX;

    printf("%.1f\n", s);

    return 0;
}
