#include <stdio.h>

int main (void)
{
    int num;

    printf ("\n Insira um numero...: ");
    scanf ("%i", &num);

    if (num % 2 == 0)
    {
        printf ("\n Numero e par ");
    }
    else
    {
        printf ("\n Numero Impar ");
    }
    printf ("\n");
    return 0;
}