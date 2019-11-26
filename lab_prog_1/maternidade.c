#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int continua = 1;
    float peso, altura;
    char nome_bb[30], nome_mae[30], nome_pai[30], sexo;
    
    while (continua != 0)
    {
        if (continua == 1)
        {
            system ("cls");
            printf ("\n\n");
            printf ("\nMaternidade - E Daqui que veem os bebes...");
            printf ("\n");        
            printf ("\nInsira aqui o nome do bebe......: ");
            scanf ("%s", &nome_bb);
            printf ("\nInsira aqui o nome da mae......: ");
            scanf ("%s", &nome_mae);
            printf ("\nInsira aqui o nome do pai......: ");
            scanf ("%s", &nome_pai);
            printf ("\nQual o peso do bebe......: ");
            scanf ("%f", &peso);
            printf ("\nQual a altura.....: ");
            scanf ("%f", &altura);    
            printf ("\nQual o sexo [M/F] ");
            fflush (stdin);
            scanf ("%c", &sexo);
            system ("cls");
            printf ("\n\n");
            printf ("\nMaternidade - E Daqui que veem os bebes...");
            printf ("\n");
            printf ("\n%s nasceu com %.3fkg e %.0fcm de altura, do sexo %c.\nSeus pais sao %s e %s", nome_bb, peso, altura, sexo, nome_mae, nome_pai);
            printf ("\n");
            printf ("\nDeseja continuar? [1 - Sim | 0 - Nao]");
            printf ("\n\n");
            scanf ("%i", &continua);   
        }
        else 
        {
            system ("cls");
            printf ("\nPrograma sera encerrado,");
        }
    }
    return 0;
}