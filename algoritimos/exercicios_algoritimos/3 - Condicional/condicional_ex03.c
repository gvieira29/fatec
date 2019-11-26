#include <stdio.h>

int main (void)
{
    float x, y, z;

    printf ("\n Insira o valor de X...: ");
    scanf ("%f", &x);
    printf ("\n Insira o valor de Y...: ");
    scanf ("%f", &y);
    printf ("\n Insira o valor de Z...: ");
    scanf ("%f", &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        printf ("\n Pode formar um triangulo ");

        if (x == y && x == z && y == z)
        {
            printf ("\n EQUILATERO ");
        }
        else if (x == y || x == z || y == z)
        {
            printf ("\n ISOCELES ");
        }
        else if (x != y && x != z && y != z)
        {
            printf ("\n ESCALENO ");
        }
        else
        {
            printf ("\n NULO");
        }
    }
    else
    {
        printf ("\n Nao pode formar um triangulo ");
    }
    printf ("\n");
    return 0;
}