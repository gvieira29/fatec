#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char nome1[10], nome2[10], nome3[10];
    float nota1, nota2, nota3;

    printf ("\n Insira o nome do aluno 1...: ");
    scanf ("%s", &nome1);
    printf ("\n insira a nota do aluno 1...; ");
    scanf ("%f", &nota1);

    printf ("\n Insira o nome do aluno 2...: ");
    scanf ("%s", &nome2);
    printf ("\n insira a nota do aluno 2...; ");
    scanf ("%f", &nota2);

    printf ("\n Insira o nome do aluno 3...: ");
    scanf ("%s", &nome3);
    printf ("\n insira a nota do aluno 3...; ");
    scanf ("%f", &nota3);

    printf ("\n ALUNO \t NOTA ");
    printf ("\n %s \t %.1f", nome1, nota1);
    printf ("\n %s \t %.1f", nome2, nota2);
    printf ("\n %s \t %.1f", nome3, nota3);
    printf ("\n");
    return 0; 
}