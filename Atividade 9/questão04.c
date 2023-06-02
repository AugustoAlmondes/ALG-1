#include<math.h>
#include<stdio.h>

struct Ponto{
    float x;
    float y;
};

int main() {

    float d;

    struct Ponto ponto1, ponto2;

    printf("Digite as coordenadas do ponto 1\n");
    printf(" Ponto X: ");
        scanf("%f", &ponto1.x);
    printf(" Ponto Y: ");
        scanf("%f", &ponto1.y);
    printf("Digite as coordenadas do ponto 2\n");
    printf(" Ponto X: ");
        scanf("%f", &ponto2.x);
    printf(" Ponto Y: ");
        scanf("%f", &ponto2.y);

    d= pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2);
    d = sqrt(d);

    printf("Distancia entre A e B eh: %.2f\n", d);

    return 0;
}
