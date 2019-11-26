#include <stdio.h>

int main (void)
{
    int n1, n2;

    printf ("\n Insira um numero...: ")/
    scanf ("%i", &n1);
    printf ("\n Insira outro numero...: ")/
    scanf ("%i", &n2);

    if (n1 < n2)
    {
        printf ("\n %i, %i", n1, n2);
    }
    else if (n2 < n1)
    {
        printf ("\n %i, %i", n2, n1);
    }
    printf ("\n ");
    return 0;
}