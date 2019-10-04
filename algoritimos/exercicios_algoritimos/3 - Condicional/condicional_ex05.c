#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float a, b, c, x1, x2, delta;

    printf ("\n Insira o valor de A...: ");
    scanf ("%f", &a);
    printf ("\n Insita o valor de B...: ");
    scanf ("%f", &b);
    printf ("\n Insita o valor de C...: ");
    scanf ("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta >= 0)
    {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf ("\n Delta \t| X1 \t| X2 ");
        printf ("\n %.0f \t| %.0f \t| %.0f ", delta, x1, x2);
    }
    else
    {
        printf ("\n Nao existem raizes reais. ");
    }
    printf("\n");
    return 0;
}