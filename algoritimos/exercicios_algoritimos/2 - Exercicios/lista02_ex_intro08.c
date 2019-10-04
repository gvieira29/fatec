#include <stdio.h>

int main (void)
{
    int n1, n2, r1, r2;

    printf ("\n Insira o valor de N1...; ");
    scanf ("%i", &n1);
    printf ("\n Insira o valor de N2...; ");
    scanf ("%i", &n2);

    r1 = n1 * 5;
    r2 = n2 + 10;

    printf ("\n %i x 5 = %i, e, %i + 10 = %i ", n1, r1, n2, r2);
    printf ("\n");
    return 0;
}