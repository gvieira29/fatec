#include <stdio.h>

int main (void)
{
    int x1, x2, x3;

    printf ("\n Insira o valor para x1...: ");
    scanf ("%i", &x1);
    printf ("\n Insira o valor para x2...: ");
    scanf ("%i", &x2);

    x3 = x1;
    x1 = x2;
    x2 = x3;

    printf ("\n o valor de x1 passou a ser %i e x2 passou a valer %i ", x1, x2);
    printf ("\n");
    return 0;
}