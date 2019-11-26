#include <stdio.h>

int main (void)
{
    int num, numdobro;

    printf ("\n Insira um numero inteiro...: ");
    scanf ("%i", &num);

    numdobro = num * 2;

    printf ("\n O dobro do numero digitado %i, e de %i ", num, numdobro);
    printf ("\n");
    return 0;
}