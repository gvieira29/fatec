#include <stdio.h>

int main (void)
{
    int n1, n2, n3, n4, soma;

    printf ("\n Insira o valor do numero 1...: ");
    scanf ("%i", &n1);
    printf ("\n Insira o valor do numero 2...: ");
    scanf ("%i", &n2);
    printf ("\n Insira o valor do numero 3...: ");
    scanf ("%i", &n3);
    printf ("\n Insira o valor do numero 4...: ");
    scanf ("%i", &n4);

    soma = n1 + n2 + n3 + n4;

    printf ("\n A soma dos 4 numeros e de %i", soma);
    printf ("\n");
    return 0;
}