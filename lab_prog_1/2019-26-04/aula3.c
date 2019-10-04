#include <stdio.h>

int main(void)
{
    //int quantdb = 3;

    struct colaborador
    {
        int cod;
        char nome[40];
        float salario;
    };

    struct colaborador cooldb[3];

    FILE *arq;
    int i;
    arq = fopen ("colaborador.txt", "w");
    if (arq == NULL)
    {
        printf ("\n ERRO AO ABRIR O ARQUIVO!\n\n\n");
    }//if (arq == NULL)
    else
    {
        for (i = 0; i < 3; i++)
        {
        printf ("\n Insira o Codigo de Identificacao do Funcionario.....: ");
        fflush(stdin);
		scanf ("%i", &cooldb[i].cod);
        printf ("\n Insira o Nome do Colaborador.....: ");
        fflush(stdin);
		scanf ("%s", &cooldb[i].nome);
        printf ("\n Insira, qual o salario deste colaborador.....: ");
        fflush(stdin);
		scanf ("%f", &cooldb[i].salario);
        fprintf (arq, "\n %i; %s; %f; \n", cooldb[i].cod, cooldb[i].nome, cooldb[i].salario);
        }//for (i = 0; i < quantdb; i++)
        fclose(arq);
    }//else
    return 0;
}//int main(void)
