#include <stdio.h>

void menuPrincipal()
{   
    //system("cls");
    printf ("\n ====== MENU PRINCIPAL ======");
    printf ("\n == 1 == Cadastrar novo Colaborador");
    printf ("\n == 9 == Menu Principal");
    printf ("\n == 0 == Encerrar a execucao");
    printf ("\n == Insira a opcao aqui.....:  ");
}

int main(void)
{
    char nome[30], texto[80];
    int codigo;
    int opContinuar;
    float salario;

    FILE *arquivo;
    arquivo = fopen ("colab.txt", "w");
    
    if (arquivo == NULL)
    {
        printf ("\n Erro 0x00001234");
        printf ("\n ");
    }
    else
    {
        menuPrincipal ();
        scanf ("%i", &opContinuar);
        
        while (opContinuar != 0)
        {
            if (opContinuar == 9)
            {
                menuPrincipal ();
                scanf ("%i", &opContinuar);
            }
            else if (opContinuar == 1)
            {
                printf ("\n Insira o nome do Colaborador.....: ");
                scanf ("%s", &nome);
                printf ("\n Insira o codigo do Colaborador.....: ");
                scanf ("%i", &codigo);
                printf ("\n Insira o Salario.....: ");
                scanf ("%f", &salario);
                fprintf (arquivo, "%s;%i;%.2f\n", nome, codigo, salario);
                
                menuPrincipal ();
                scanf ("%i", &opContinuar);
            }
            else if (opContinuar == 2)
            {
                while (fgets (texto,80,arquivo) != NULL)
                {
                    printf ("\n %s", texto);
                }        
            }
        }
        fclose (arquivo);
    } 
    return 0;
}