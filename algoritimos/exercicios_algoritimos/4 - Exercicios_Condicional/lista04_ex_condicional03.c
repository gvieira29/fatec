#include <stdio.h>
#include <math.h>

int main (void)
{
    int cod;
    float preco, consumo, pagar;

    printf ("\n Insira o preco por kw/h...: ");
    scanf ("%f", &preco);
    
    printf ("\n Insira o codigo do cosumidor...: ");
    scanf ("%i", &cod);
    printf ("\n Qual o foi o consumo em kw/h do usuario %i...: ", cod);
    scanf ("%f", &consumo);

    pagar = (preco * consumo);

    if (pagar <= 11.20)
    {
        printf ("\n Consumo abaixo do mínimo. R$11,20");
    }
    else
    {
        printf ("\n Cosumidor N.%i ", cod);
        printf ("\n Total a Pagar R$%.2f", pagar);
    }
    printf ("\n ");
    return 0;
}