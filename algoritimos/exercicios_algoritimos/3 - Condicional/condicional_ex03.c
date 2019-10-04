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
    
    if ((x + y) > z && (y + z) > x && (z + x) > y)
    {
        printf ("\n Pode formar um Triangulo ");

        if (x == y && x == z && y == z)
        {
            printf ("\n == Equilatero ");
        }
        else if (x == y && x == z)
        {
            printf ("\n == Isosceles ");
        }
        else if (x != y && x != z && y != z)
        {
            printf ("\n == Escaleno ");
        }
        else
        {
            printf ("\n -999");
            //Erro nao progamado
        }
    }
    else
    {
        printf ("\n Nao pode formar um Triangulo");
    }
    printf ("\n");
    return 0;
}