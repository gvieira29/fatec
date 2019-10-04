#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menuPrincipal()
{   
    system("cls");
    printf ("\n ====== MENU PRINCIPAL ======");
    printf ("\n == 1 == Cadastrar novo Colaborador");
    printf ("\n == 2 == Listar Colaboradores");
    printf ("\n == 3 == Modificar Dados de um Colaborador");
    printf ("\n == 4 == Remover um Colaborador");
    printf ("\n == 9 == Menu Principal");
    printf ("\n == 0 == Encerrar a execucao");
    printf ("\n == Insira a opcao aqui.....:  ");
}
void headerPrincipal()
{   
    system("cls");
    printf ("\n ==================================");
    printf ("\n ====== DEPARTAMENTO PESSOAL ======");
    printf ("\n ========== COLABORADORES =========");
    printf ("\n ==================================");
    printf ("\n ");
}

int main(void)
{
    int nFichas;
    int opContinuar;
    int escrever, listar;

    nFichas = 5;

    struct colaborador
    {
        int cod;
        char nome[40];
        float salario;
    };//struct colaborador
    struct colaborador cbd[nFichas];

    FILE *indexdb;
    indexdb = fopen ("cdb.txt", "w");

    if (indexdb == NULL)
    {
        printf ("\n ERRO AO ABRIR O ARQUIVO!");
        printf ("\n ");
    }//if (indexdb == NULL)
    else
    {
        headerPrincipal();
        menuPrincipal();
        scanf("%i", &opContinuar);

        while(opContinuar != 0)
        {
            if (opContinuar == 9)
            {
                headerPrincipal();
                menuPrincipal();
                scanf("%i", &opContinuar);
            }//if (opContinuar == 9)
            else if (opContinuar == 1)
            {
                headerPrincipal();
                for (escrever, listar = 0; escrever, listar < nFichas; escrever, listar++)
                {
                    printf ("\n Insira o Codigo de Identificacao do Funcionario.....: ");
                    fflush(stdin);
                    scanf ("%i", &cbd[nFichas].cod);
                    printf ("\n Insira o Nome do Colaborador.....: ");
                    fflush(stdin);
                    scanf ("%s", &cbd[nFichas].nome);
                    printf ("\n Insira, qual o salario deste colaborador.....: ");
                    fflush(stdin);
                    scanf ("%f", &cbd[nFichas].salario);
                    fprintf (indexdb, "\n %i; %s; %.2f; \n", cbd[escrever, listar].cod, cbd[escrever, listar].nome, cbd[escrever, listar].salario);
                }//for (escrever, listar = 0; escrever, listar < nFichas; escrever, listar++)
           }//else if (opContinuar == 1)
            else if (opContinuar == 2)
            {
                printf ("\n Nao Existe.");
            }//else if (opContinuar == 2)
        }//while(opContinuar != 0)
        fclose(indexdb);
    }//else
    return 0;
}//int main(void)
