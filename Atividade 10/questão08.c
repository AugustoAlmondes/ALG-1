#include<stdio.h>
#include<math.h>

struct coordenadas{
    float x, y;
};

typedef struct coordenadas Ponto;

float distancia(Ponto p1, Ponto p2){
    float d;

    d = pow((pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)), (0.5));

    return d;
}

void main(){
    Ponto p1, p2;
    float d;

    printf("Digite a coordenada de X1: ");
    scanf("%f", &p1.x);
     printf("Digite a coordenada de Y1: ");
    scanf("%f",&p1.y);

     printf("Digite a coordenada de X2: ");
    scanf("%f", &p2.x);
     printf("Digite a coordenada de Y2: ");
    scanf("%f",&p2.y);

    d = distancia(p1, p2);

    printf("Distãncia: %.2f\n", d);
}
