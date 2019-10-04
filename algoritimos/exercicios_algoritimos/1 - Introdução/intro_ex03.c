#include <stdio.h>

int main (void)
{
    float pi = 3.1415, area, raio;

    printf ("\n Insira o valor do raio...: ");
    scanf ("%f", &raio);

    area = pi * (raio * raio);

    printf ("\n O valor da area e de %.2f ", area);
    printf ("\n");
    return 0;
}