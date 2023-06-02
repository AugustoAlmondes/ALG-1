#include <stdio.h>

struct funcionario{
    char nome[80];
    char cargo[10];
    float salario;
};

int main(){
//      struct funcionario func = {"Marcos da Silva", "Vendedor", 2000.00}; 
    struct funcionario func;
    printf("Nome:");
    scanf("%[^\n]s", func.nome);
    printf("Cargo:");
    scanf("%s", func.cargo);
    printf("Salario:");
    scanf("%f", &func.salario);
    printf("Funcionario:\n");
    
    printf("Nome: %s\n", func.nome);
    printf("Cargo: %s\n", func.cargo);
    printf("Salario: %.2f\n", func.salario);   
    return 0;
}
        
