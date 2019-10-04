#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq;
    char texto[80];
    arq = fopen("a.txt", "r");
    if (arq == NULL)
    {
        printf ("\n ERRO AO ABRIR O ARQUIVO!");
    }
    else
    {
        while (fgets(texto,80,arq) != NULL) 
        {
            printf ("%s", texto);
        }   
        fclose(arq);
    }
}