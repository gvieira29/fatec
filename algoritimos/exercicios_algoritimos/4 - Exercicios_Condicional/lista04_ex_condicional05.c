#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char nome[20];
    float sal_novo, sal_atual;
    
    printf ("\n Insira o nome do Jogador...: ");
    scanf ("%s", &nome[20]);
    printf ("\n Insira o Salario Atual do Jogador...: ");
    scanf ("%f", &sal_atual);

    if (sal_atual <= 0 && sal_atual < 1000)
    {
        sal_novo = sal_atual + sal_atual * 0.20;
    }
    else if (sal_atual <= 1001 && sal_atual < 5000)
    {
        sal_novo = sal_atual + sal_atual * 0.10;
    }
    else if (sal_atual >= 5000)
    {
        sal_novo = sal_atual;
    }
    printf ("\n O Jogador %s", nome);
    printf ("\n Teve um aumento de R$%.2f para R$%.2f. ", sal_atual, sal_novo);
    printf ("\n");
    return 0;
}