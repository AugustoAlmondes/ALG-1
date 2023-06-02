#include<stdio.h>

void preencherMatriz();
void imprimirMatriz();

int matriz[70][70], n = 5;

int main(){

    preencherMatriz;
    imprimirMatriz;
}

void preencherMatriz(){

    for (int linha = 0; linha < n; linha++){
        for (int coluna = 0; coluna < n; coluna ++){
            matriz[linha][coluna];
        }
    }

}

void imprimirMatriz(){

  for (int linha = 0; linha < n; linha++){
        for (int coluna = 0; coluna < n; coluna ++){
            printf("%i\n",matriz[linha][coluna]);
        }
    }


}
