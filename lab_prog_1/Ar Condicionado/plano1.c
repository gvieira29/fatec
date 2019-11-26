#include <stdio.h>
#include <stdlib.h>
/*
const int btuRes 600;
const int btuCom 800;
const int soltarde 600;
const int solmanha 600;
*/

int main()
{
    float somaatual = 0;
    int opmoradia, oplaje;
    float pessoas, totpessoas;
    float aparelhos, totaparelhos;
    float largura, comprimento, area;
    float janelas, cortinas, totjanelas;

    printf ("\nInsira a Largura do Comodo.....: ");
    scanf ("%f", &largura);
    printf ("\nInsira o Comprimento do Comodo.....: ");
    scanf ("%f", &comprimento);

    area = largura * comprimento;

    printf ("\nQual a quantidade de Janelas.....: ");
    scanf ("%f", &janelas);
    printf ("\nQuantas cortinas possuem, destas %.0f janelas.....: ", janelas);
    scanf ("%f", &cortinas);

    totjanelas = janelas - (cortinas / 2);

    printf ("\nQuantas pessoas utilizam este local.....: ");
    scanf ("%f", &pessoas);

    totpessoas = pessoas - 1;

    printf ("\nQual o tipo de instalação?");
    printf ("\n1 - Casa");
    printf ("\n2 - Apartamento");
    scanf ("%i", &opmoradia);

    if (opmoradia == 1)
    {
        printf ("\nPossui laje? [S/N]");
        scanf ("%i", &oplaje);
        if (oplaje == 'S' || oplaje == 's')
        {
            printf ("\nAdicionar mais btus"); //Adicionar BTU p/ laje neste bloco
        }else
        {
            printf ("\nNao faz nada");
        }
    }
    else (opmoradia == 2)
    {
        printf ("\nAdicionar mais btus"); //Adicionar BTU p/ laje neste bloco
    }
    else
    {
        printf ("\nOperacao nao existe.");
    }

    printf ("Quantos aparelhos ligados no comodo.....: ");
    scanf ("%i", &aparelhos);

    totaparelhos = aparelhos * somaatual;
    
    printf ("\nQual o tipo de instalacao");
    printf ("\n1 - Comercial");
    printf ("\n2 - Residencial");
    
    /* Teste dos valores em tela
    printf ("\n%.1f - %.1f - %.1f", largura, comprimento, area);
    printf ("\n%.0f - %.0f - %.0f", janelas, cortinas, totjanelas);
    system ("pause");
    getch();
    */

    return 0;
}




2 etapas

1