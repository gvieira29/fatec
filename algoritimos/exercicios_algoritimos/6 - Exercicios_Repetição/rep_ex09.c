#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) 
{  
    int soma = 0, numero;
    
    printf ("\n Digite um numero inteiro....: ");
    scanf ("%i", &numero);

    for (int contador = 1; contador <= numero; contador++) 
    {
        soma = soma + contador;
    }
    printf ("\n Soma dos numeros inteiros = ", soma);
    printf ("\n");
    return 0;
}