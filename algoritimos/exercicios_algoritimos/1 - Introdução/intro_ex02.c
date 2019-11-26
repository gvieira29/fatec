#include <stdio.h>

int main (void)
{
    float sal_atual, sal_novo;

    printf ("\n Insira o salario atual ...: ");
    scanf ("%f", &sal_atual);
    
    sal_novo = sal_atual + (sal_atual * 0.25);

    printf ("\n O novo salario sera de %.2f", sal_novo);
    printf ("\n");
    return 0;
}