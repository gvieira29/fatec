#include <stdio.h>

int main (void)
{
    float circ, raio, pi = 3.1415;

    printf ("\n Insira o valor do raio...: ");
    scanf ("%f", &raio);

    circ = (2 * pi) * raio;

    printf ("\n O valor da Circunferencia e de %.1f ", circ);
    printf ("\n");
    return 0;
}