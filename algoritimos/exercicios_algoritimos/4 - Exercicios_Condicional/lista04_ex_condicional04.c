#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float peso, massa, altura;

    printf ("\n Insira quanto pesa (KG)...: ");
    scanf ("%f", &peso);
    printf ("\n Insira a altura (M)...: ");
    scanf ("%f", &peso);
    
    massa = peso / (altura * altura);

    if (massa < 26)
    {
        printf ("\n Grau de obesidade: Normal. ");
    }
    else if (massa >=26 && massa < 30)
    {
        printf ("\n Grau de obesidade: Obeso. ");
    }
    else if (massa >= 30)
    {
        printf ("\n Grau de obesidade: Obeso Morbido. ");
    }
    else
    {
        printf ("\n Grau de obesidade nao definido. ");
    }
    printf ("\n");
    return 0;
}