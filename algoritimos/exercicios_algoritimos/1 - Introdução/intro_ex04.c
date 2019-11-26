#include <stdio.h>
#include <math.h>

int main (void)
{
    int num, n2, n3, raiz;

    printf ("\n Insira um numero positivo e maior que zero...: ");
    scanf ("%i", &num);

    if (num <= 0)
    {
        printf ("\n O NUMERO DEVE SER POSITIVO E MAIOR QUE ZERO ");
        printf ("\n Insira novamente...: ");
        scanf ("%i", &num);
    }
    else
    {
        n2 = num * num;
        n3 = num * num * num;
        raiz = (sqrt (num));

        printf ("\n O numero digitado %i, ao quadrado = %i, ao cubo = %i, e tem a raiz = %i", num, n2, n3, raiz);
        printf ("\n");
    }
    return 0;
}