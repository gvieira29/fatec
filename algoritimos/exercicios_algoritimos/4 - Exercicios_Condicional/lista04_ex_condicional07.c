#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define spc 20
struct hospede
{
    int diarias;
    char nome[spc];
    float consumo;
};
struct hospede usuario[spc];

int main (void)
{
    char apto;
    float aptA, aptB, aptC, aptD;
    float soma, contafinal;

    aptA = 150.00;
    aptB = 100.00;
    aptC = 75.00;
    aptD = 50.00;

    printf ("\n Insira o nome do hospede...: ");
    scanf ("%s", &usuario[spc].nome);
    printf ("\n Insira quantidade de dias hospedado...: ");
    scanf ("%i", &usuario[spc].diarias);
    printf ("\n Insira quanto gastou nos %i dias hospedado...: ", usuario[spc].diarias);
    scanf ("%f", &usuario[spc].consumo);
    printf ("\n Qual tipo de apartamento alugado? [A, B, C ou D]...: ");
    fflush(stdin);
    scanf ("%c", apto);

    soma = 0;
    
    if (apto == 'a' || apto == 'A')
    {
        soma = soma + aptA;
    }
    else if (apto == 'b' || apto == 'B')
    {
        soma = soma + aptB;
    }
    else if (apto == 'c' || apto == 'C')
    {
        soma = soma + aptC;
    }
    else if (apto == 'd' || apto == 'D')
    {
        soma = soma + aptD;
    }

    printf ("%.2f", soma);

    //printf ("\n NOME: %s, DIAS: %i, CONSUMO: R$%.2f", usuario[spc].nome, usuario[spc].diarias, usuario[spc].consumo);
    printf ("\n");
    return 0;
}