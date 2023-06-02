#include<stdio.h>

struct pessoa {
	char nome[20];
	float alt;
	float peso;
	double rg;
};

typedef struct pessoa Pessoa;

int main() {

	double Rb;
	float imc;
	int n;

	scanf("%d", &n);


	Pessoa pessoas[n], pessoaE;
	pessoaE.rg = 0;

	for (int i = 1; i <= n; i++) {
		printf("Pessoa %d\n", i);
		printf("Digite o nome: ");
            scanf(" %s", pessoas[i].nome);
		printf("Digite a altura: ");
            scanf("%f", &pessoas[i].alt);
		printf("Digite o peso: ");
            scanf("%f", &pessoas[i].peso);
		printf("RG: ");
            scanf("%lf", &pessoas[i].rg);
	}

	printf("Digite o RG para buscar: ");

	scanf("%lf", &Rb);

	for (int i = 0; i < n; i++){
		if (pessoas[i].rg == Rb){

			imc = pessoas[i].peso / (pessoas[i].alt * pessoas[i].alt);

			printf("Nome: %s\n", pessoas[i].nome);

			printf("IMC: %lf\n", imc);

			return 0;
		}
	}
	printf("RG invalido!\n");
}
