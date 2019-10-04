#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct ficha_pessoa{;
        char nome[30];
        int idade;
        float salario;
    };

    int vdef = 30;
    int op = -1;
    int i = 0;

    struct ficha_pessoa pessoa[vdef];

    while (op != 0)
    {
        printf ("\n===== MENU =====");
        printf ("\n1 - Incluir");
        printf ("\n2 - Listar");
        printf ("\n0 - Sair");
        printf ("\nDigite a opcao desejada.....: ");
        scanf ("%i", &op);

        if (op == 1)
        {
            if (i < vdef)
            {
                printf ("\nDigite o nome.....: ");
                scanf ("%s", &pessoa[i].nome);
                //fflush (stdin);
                //fgets (pessoa[i].nome, 30, stdin);
                printf ("\nDigite o idade.....: ");
                scanf ("%i", &pessoa[i].idade);
                printf ("\nDigite o salario.....: ");
                scanf ("%f", &pessoa[i].salario);
                i++;
            }
            else
            {
                printf ("\nNao e possivel registrar mais que %i pessoas", vdef);
            }

            printf ("\nTecle algo para voltar...");
            getchar ();
        }
        else if (op == 2)
        {
            printf ("\n===== LISTAGEM DE PESSOAS =====");
                
                for (int l = 0; l < i; l++)
                {
                    printf ("\n[PESSOA %i]", (l + 1);
                    printf ("\nNOME...: %s\tIDADE...: %i\tSALARIO...: %.2f", pessoa[l].nome, pessoa[l].idade, pessoa[l].salario);
                }

            printf ("\nTecle algo para voltar...");
            getchar ();
        }
        else if (op == 0)
        {
            printf ("\nPrograma encerrado!!");
        }
        else
        {
            printf ("\nOperacao nao existe.");
            printf ("\nTecle algo para voltar...");
            getchar ();
        }
    }
    return 0;
}