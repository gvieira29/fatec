#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{   
    struct ficha_pessoa
    {
        char nome[30];
        int idade;
        float salario;
    };

    int vdef = 30;
    int op = -1;
    int reg = 0;
    int p_alt, p_exc;
    int listar;

    struct ficha_pessoa pessoa[vdef];

    while (op != 0)
    {
        printf ("\n===== MENU =====");
        printf ("\n1 - Incluir");
        printf ("\n2 - Listar");
        printf ("\n3 - Redefinir");
        printf ("\n4 - Excluir");
        printf ("\n0 - Sair");
        printf ("\n\nDigite a opcao desejada.....: ");
        scanf ("%i", &op);

        if (op == 1)
        {
            system ("cls");
            if (reg < vdef)
            {
                printf ("\nDigite o nome.....: ");
                fflush (stdin);
                fgets (pessoa[reg].nome, 30, stdin);
                printf ("\nDigite o idade.....: ");
                scanf ("%i", &pessoa[reg].idade);
                printf ("\nDigite o salario.....: ");
                scanf ("%f", &pessoa[reg].salario);
                system ("cls");
                reg++;
            }
            else
            {
                printf ("\nNao e possivel armazenar mais que %i pessoas.\n", vdef);
            }

            printf ("\nTecle algo para voltar...");
            getch ();
        }
        else if (op == 2)
        {
            system ("cls");
            printf ("\nLISTAGEM DE PESSOAS");
                for (listar = 0; listar < reg; listar++)
                {
                    printf ("\n[PESSOA %i]", (listar+1));
                    printf ("\nNOME: %s \tIDADE: %i \tSALARIO: %.2f", pessoa[l].nome, pessoa[l].idade, pessoa[l].salario);
                }

            printf ("\nTecle algo para voltar...");
            getch ();
        }
        else if (op == 3)
        {
            system ("cls");
            printf ("\nDigte a pessoa que deseja alterar.....: ");
            scanf ("%i", &p_alt);

            p_alt = p_alt - 1;

            if (p_alt <= reg)
            {
                printf ("\nPessoa escolhida");
                printf ("\nNOME: %s \tIDADE: %i \tSALARIO: %.2f", pessoa[p_alt].nome, pessoa[p_alt].idade, pessoa[p_alt].salario);
                printf ("\nDigite o nome.....: ");
                fflush (stdin);
                fgets (pessoa[p_alt].nome, 30, stdin);
                printf ("\nDigite o idade.....: ");
                scanf ("%i", &pessoa[p_alt].idade);
                printf ("\nDigite o salario.....: ");
                scanf ("%f", &pessoa[p_alt].salario);
            }
            else
            {
                printf ("\nNao Localizado.");
            }

            printf ("\nTecle algo para voltar...");
            getch ();
        }
        else if(op == 4)
        {
            system ("cls");
            printf ("\nDigte a pessoa que deseja excluir.....: ");
            scanf ("%i", &p_exc);
            
            p_exc = p_exc -1;

            if (p_exc < reg)
            {
                for (l = (p_exc + 1); l < reg; l++)
                {
                    strcpy (pessoa[l - 1].nome, pessoa[l].nome);
                    pessoa[l - 1].idade, pessoa[l].idade;
                    pessoa[l - 1].salario, pessoa[l].salario;
                }                
                
                l = l - 1;
                printf ("\nExcluido.");
            }
            else
            {
                printf ("\nNao Localizado.");
            }
            printf ("\nTecle algo para voltar...");
            getch ();
        }
        else if (op == 0)
        {
            system ("cls");
            printf ("\nFim da Execucao.");
        }else
        {
            system ("cls");
            printf ("\nOperacao nao existe.");
            printf ("\nTecle algo para voltar...");
            getch ();
        }
    }
    return 0;
}
