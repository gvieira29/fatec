#include <stdio.h>

int main (void)
{
    int num;

    printf ("\n Insira um numero...: ");
    scanf ("%i", &num);

    if (num == 0)
    {
        printf ("\n Numero igual a zero ");
    }
    else if (num > 0)
    {
        printf ("\n Numero maior que zero ");
    }
    else if (num < 0)
    {
        printf ("\n Numero menor que zero ");
    }
    printf ("\n");
    return 0;
}