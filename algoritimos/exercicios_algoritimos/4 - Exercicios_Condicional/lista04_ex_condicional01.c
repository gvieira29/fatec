#include <stdio.h>

int main (void)
{
    int a, b, c;

    printf ("\n Insira um numero...: ");
    scanf ("%i", &a);
    printf ("\n Insira um numero...: ");
    scanf ("%i", &b);
    printf ("\n Insira um numero...: ");
    scanf ("%i", &c);

    if (a < b)
    {
        if (b < c)
        {
            printf ("\n %i, %i, %i ", a, b, c);
        }
        else if (a < c)
        {
            printf ("\n %i, %i, %i ", a, c, b);
        }
        else
        {
            printf ("\n %i, %i, %i ", c, a, b);
        }
    }
    else
    {
        if (b < c)
        {
            if (a < c)
            {
                printf ("\n %i, %i, %i ", b, a, c);
            }
            else 
            {
                printf ("\n %i, %i, %i ", b, c, a);
            }
        }
        else
        {
            printf ("\n %i, %i, %i ", c, b, a);
        }
    }
    printf ("\n");
    return 0;
}