#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    char nome[20];
    float nota1, nota2, nota3, mediafinal;

    printf ("\n Insira o nome do aluno...: ");
    scanf ("%s", nome[20]);
    printf ("\n Insira a 1 Nota...: ");
    scanf ("%f", nota1);
    printf ("\n Insira a 2 Nota...: ");
    scanf ("%f", nota2);
    printf ("\n Insira a 3 Nota...: ");
    scanf ("%f", nota3);

    mediafinal = (nota1 + nota2 + nota3) / 3;

    if (mediafinal >= 8)
    {
        printf ("\n Media Final: %.1f, CONCEITO: A ", mediafinal);
    }
    else if (mediafinal >= 5 && mediafinal < 8)
    {
        printf ("\n Media Final: %.1f, CONCEITO: B ", mediafinal);
    }
    else if (mediafinal < 5)
    {
        printf ("\n Media Final: %.1f, CONCEITO: C ", mediafinal);
    }
    printf ("\n");
    return 0;   
}