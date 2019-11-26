#include <stdio.h>

int main (void)
{
    int cod;
    float sal_atual, sal_novo, aumento;

    printf ("\n Insira seu salario atual...: R$ ");
    scanf ("%f", &sal_atual);

    printf ("\n Insira o Codigo do seu Cargo...: ");
    printf ("\n 1 - Escrituario ");
    printf ("\n 2 - Secretario ");
    printf ("\n 3 - Caixa ");
    printf ("\n 4 - Gerente ");
    printf ("\n 5 - Diretor ");
    printf ("\n ");
    scanf ("%i", &cod);

    switch (cod)
    {
        case 1:
            aumento = sal_atual * 0.50;
            sal_novo = sal_atual + aumento;

            printf ("\n Profissao Escrituario ");
            printf ("\n Salario Atual em R$ %.2f ", sal_atual);
            printf ("\n Com Aumento de R$ %.2f ", aumento);
            printf ("\n Passa a receber agora R$ %.2f ", sal_novo);
        break;

        case 2:
            aumento = sal_atual * 0.35;
            sal_novo = sal_atual + aumento;

            printf ("\n Profissao Secretario ");
            printf ("\n Salario Atual em R$ %.2f ", sal_atual);
            printf ("\n Com Aumento de R$ %.2f ", aumento);
            printf ("\n Passa a receber agora R$ %.2f ", sal_novo);
        break;
    
        case 3:
            aumento = sal_atual * 0.20;
            sal_novo = sal_atual + aumento;

            printf ("\n Profissao Caixa ");
            printf ("\n Salario Atual em R$ %.2f ", sal_atual);
            printf ("\n Com Aumento de R$ %.2f ", aumento);
            printf ("\n Passa a receber agora R$ %.2f ", sal_novo);
        break;

        case 4:
            aumento = sal_atual * 0.10;
            sal_novo = sal_atual + aumento;

            printf ("\n Profissao Gerente ");
            printf ("\n Salario Atual em R$ %.2f ", sal_atual);
            printf ("\n Com Aumento de R$ %.2f ", aumento);
            printf ("\n Passa a receber agora R$ %.2f ", sal_novo);
        break;

        case 5:
            aumento = sal_atual * 0.00;
            sal_novo = sal_atual + aumento;

            printf ("\n Profissao Escrituario ");
            printf ("\n Salario Atual em R$ %.2f ", sal_atual);
            printf ("\n Com Aumento de R$ %.2f ", aumento);
            printf ("\n Passa a receber agora R$ %.2f ", sal_novo);
        break;

        default:
            printf ("\n Erro, recomecar ");
        break;
    }
    printf ("\n");
    return 0;
}   