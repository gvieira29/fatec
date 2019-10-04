#include <stdio.h>
#include <math.h>

int main (void)
{
    float a, b, c, x1, x2, delta;

    printf ("\n Insira o valor de A..: ");
    scanf ("%f", &a);
    printf ("\n Insira o valor de A..: ");
    scanf ("%f", &b);
    printf ("\n Insira o valor de A..: ");
    scanf ("%f", &c);

    if (a == 0)
    {
        printf ("\n Nao e possivel calcular ");
    }
    else
    {
        delta = (b * b) - (4 * a * c);

        if (delta < 0)
        {
            printf ("\n Nao e possivel calcular a raiz ");
        }
    }
    
    x1 = (- b) + sqrt(delta) / (2 * a);
    x2 = (- b) - sqrt(delta) / (2 * a);

    printf ("\n Delta \t X1 \t X2 \n %.1f \t %.1f \t %.1f ", delta, x1, x2);
    printf ("\n");
    return 0;
}