#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{

    int n, i;

    printf ("\n Digite um numero....: ");
    scanf ("%i", &i);

    i = 1;

    while ((i * (i + 1) * (i + 2)) < n) 
    {
        i++;
    }

    if ((i * (i + 1) * (i + 2)) == n) 
    {
        printf ("\n %i e Trinagular ", i); 
    }
    else 
    {
        printf ("\n %i Nao e Trinagular ", i);
    }
    printf ("\n");
    return 0;
}