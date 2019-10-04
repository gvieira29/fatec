#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char prod1[10]="Lanche", prod2[10]="Bebida", prod3[10]="Batata";
    float vr1 = 10.00, vr2 = 5.00, vr3 = 3.00;
    float t1, t2, t3, qtd1, qtd2, qtd3, vrt;

    printf ("\n PRODUTOS \t PRECO UND. ");
    printf ("\n ========================== ");
    printf ("\n %s \t R$ %.2f ", prod1, vr1);
    printf ("\n %s \t R$ %.2f ", prod2, vr2);
    printf ("\n %s \t R$ %.2f ", prod3, vr3);
    printf ("\n ========================== ");
    printf ("\n ");
    printf ("\n Insira a quantidade desejada de %s ...: ", prod1);
    scanf ("%f", &qtd1);
    printf ("\n Insira a quantidade desejada de %s ...: ", prod2);
    scanf ("%f", &qtd2);
    printf ("\n Insira a quantidade desejada de %s ...: ", prod3);
    scanf ("%f", &qtd3);

    t1 = qtd1 * vr1;
    t2 = qtd2 * vr2;
    t3 = qtd3 * vr3;
    vrt = t1 + t2 + t3;

    printf ("\n QTD \t PRODUTO \t PRECO UND \t TOTAL PRODUTO ");
    printf ("\n ====================================================== ");
    printf ("\n %.0f \t %s \t R$ %.2f \t R$ %.2f ", qtd1, prod1, vr1, t1);
    printf ("\n %.0f \t %s \t R$ %.2f \t R$ %.2f ", qtd2, prod2, vr2, t2);
    printf ("\n %.0f \t %s \t R$ %.2f \t R$ %.2f ", qtd3, prod3, vr3, t3);
    printf ("\n ====================================================== ");
    printf ("\n ");
    printf ("\n TOTAL DO PEDIDO R$ %.2f ", vrt);
    printf ("\n");
    return 0;
}