#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq;
    char texto[80];
    int continua = 1;
    arq = fopen("a.txt", "w");
    if (arq == NULL)
    {
        printf ("\n ERRO AO ABRIR O ARQUIVO!\n\n\n");
    }
    else
    {
        while (continua != 0)
        {
            printf ("\n Digite o texto a ser gravado.....: ");
            fflush(stdin);
			scanf ("%[^\n]s", &texto);
            fprintf (arq, "%s\n", texto);
            printf ("\n Deseja continuar digitando?");
            printf ("\n 1 - Sim");
            printf ("\n 0 - Nao");
            printf ("\n .....: ");
            scanf ("%i", &continua);
        }
        fclose(arq);
    }
}
