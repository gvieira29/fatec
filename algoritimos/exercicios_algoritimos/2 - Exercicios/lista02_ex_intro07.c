#include <stdio.h>

int main (void)
{
    int n1, n2, prod;

    printf ("\n Insira valor 1...: ");
    scanf ("%i", &n1);
    printf ("\n Insira valor 2...: ");
    scanf ("%i", &n2);

    prod = n1 * n2;

    printf ("\n O produto de %i x %i = %i ", n1, n2, prod);
    printf ("\n");
    return 0;
}