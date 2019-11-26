#include <stdio.h>
#include <math.h>

int main (void)
{
    float numero, soma, contador;
    soma = 0;

    for (contador = 1; contador <= 20; contador ++)
    {
        printf ("\n Digite um numero...: ");
        scanf ("%f", &numero);

        soma = soma + (numero / contador);
    }

    printf ("\n A soma dos numeros e %f", soma);
    printf ("/n");
    return 0;
}