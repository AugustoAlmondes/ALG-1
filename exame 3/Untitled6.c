#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int resultado5 = 1;
    int resultado4 = 1;
    int resultado3 = 0;
    int resultado2 = 0;
    int resultado1 = 0;
    int t;
    char Senha[1000];

    while(fgets(Senha,1000,stdin)!= EOF)
    {

        t = strlen(Senha);

//printf("%i\n",t);
        if (t > 6 && t <= 33)
        {
            for (int i = 0; i <= t -1; i++)
            {
                //Espaço
                if(Senha[i] == ' ')
                {
                    resultado4 = 0;
                }
                //Minuscula
                if(Senha[i]>= 97 && Senha[i]<= 122)
                {
                    resultado1 = 1;
                }
                //Maiuscula
                if(Senha[i]>= 65 && Senha[i]<= 90)
                {
                    resultado2 = 1;
                }
                //Numero
                if(Senha[i]>= 48 && Senha[i]<= 57)
                {
                    resultado3 = 1;
                }
                //Simbolos de Pontua��o
                if(Senha[i]>= 43 && Senha[i]<= 47 || Senha[i]>= 58 && Senha[i]<= 64 || Senha[i]>= 91 && Senha[i]<= 96 || Senha[i]>= 123 && Senha[i]<= 126)
                {
                    resultado5 = 0;
                }

            }
        }
        if(resultado1 == 1 && resultado2 == 1 && resultado3 == 1 && resultado4 == 1 && resultado5 == 1)
        {
            printf("Senha valida\n");
        }
        else
        {
            printf("Senha invalida\n");

        }
        resultado5 = 1;
        resultado4 = 1;
        resultado3 = 0;
        resultado2 = 0;
        resultado1 = 0;
        memset(Senha, 0, sizeof(Senha));
    }
}
