#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    int numero, fibo1=0,fibo2=1, auxiliar;

    printf ("\n Digite o numero....: ");
    scanf ("%i", &numero);

    printf ("\n %i", fibo2);

    for(int contador = 0; contador <= numero; contador ++)
    {
 
        auxiliar = fibo2 + fibo1;
        fibo1 = fibo2;
        fibo2 = auxiliar;
        printf ("\n %i", auxiliar);
    }
    printf ("\n");
    return 0;
}