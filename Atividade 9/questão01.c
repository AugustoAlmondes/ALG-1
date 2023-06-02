#include<stdio.h>

struct aluno{
char nome[20];
float ira;
int ano;
};

int main(){
    int n, i, nomeVet;
    float media = 0, menor = 0, iraVet = 0;


    printf("Digite a quantidade de Alunos: ");
    scanf("%i", &n);

struct aluno Alunos[n];

    for(i = 0; i < n; i++){
        printf("Nome do Aluno: ");
        scanf("%s", Alunos[i].nome);

        printf("Ira do Aluno: ");
        scanf("%f", &Alunos[i].ira);

        printf("Ano de Inicio do Aluno: ");
        scanf("%i", &Alunos[i].ano);
            if (menor == 0)
            {
                menor = Alunos[i].ano;
                nomeVet = i;
                iraVet = Alunos[i].ira;
            }else if (menor > Alunos[i].ano){
                menor = Alunos[i].ano;
                nomeVet = i;
                iraVet = Alunos[i].ira;
            }

            media += Alunos[i].ira;
            media = media/n;
}
    printf("\nMedia da turma: %.1f", media);
    printf("\nAluno veterano: %s - Ira: %.2f", Alunos[nomeVet].nome, iraVet);
    return 0;
}
