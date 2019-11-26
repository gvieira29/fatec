#include <stdio.h>

const float btuResidencia = 600;
const float btuComercial = 800;

const float btuJanelas = 300;
const float btuCortinas = 150;

int main(void)
{
    float soma1; 
    float area, comprimento, largura; 
    float janelas, cortinas, totalJanelas; 
    float tipoUso, regiao, tipoMoradia, laje, periodo;
    char vSol;
    
    //Funcao 1
    area = (comprimento * largura);

    //Bloco 1
    printf ("\n ===== Calculadora de BTU's =====");
    printf ("\n\n");
    printf ("\n Calculo de Metragem");
    printf ("\n Insira o Comprimento do Comodo.....: ");
    printf ("\n .....: ");
    scanf ("%f", &comprimento);
    printf ("\n Insira a Largura do Comodo.....: ");
    printf ("\n .....: ");
    scanf ("%f", &largura);
    printf ("\n O Comodo tem %f metros quadrados.", area);

    //Bloco 2
    printf ("\n\n");
    printf ("\n Qual o tipo de uso?");
    printf ("\n 1 - Residencia");
    printf ("\n 2 - Comercial");
    printf ("\n .....: ");
    scanf ("%f", &tipoUso);
    
    //Funcao 2
    if (tipoUso == 1)
    {
        soma1 = (area * btuResidencia);
    }
    else if (tipoUso == 2)
    {
        soma1 = (area * btuComercial);
    }

    //Bloco 3
    printf ("\n\n");
    printf ("\n Selecione a Regiao");
    printf ("\n 1 - Sul");
    printf ("\n 2 - Sudeste");
    printf ("\n 3 - Centro-Oeste");
    printf ("\n 4 - Norte");
    printf ("\n 5 - Nordeste");
    printf ("\n .....: ");
    scanf ("%f", &regiao);

    //Funcao 3
    switch (regiao)
    {
        case 1:
            soma1 = soma1 + 50;
            break;
        case 2:
            soma1 = soma1 + 100;
            break;
        case 3:
            soma1 = soma1 + 200;
            break;
        case 4:
            soma1 = soma1 + 400;
            break;
        case 5:
            soma1 = soma1 + 500;
        default:
            //Invalido
            soma1 = soma1 + 200;
            break;
    }

    //Bloco 4
    printf ("\n\n");
    printf ("\n Escolha o tipo de moradia");
    printf ("\n 1- Casa");
    printf ("\n 2 - Apartamento");
    printf ("\n .....: ");
    scanf ("%f", &tipoMoradia);

    //Funcao 4
    if (tipoMoradia == 1)
    {
        //Sub Funcao - Bloco 4
        printf ("\n");
        printf ("\n 1 - Com Laje");
        printf ("\n 2 - Sem Laje");
        printf ("\n .....: ");
        scanf ("%f", &laje);

        if (laje == 1)
        {
            soma1 = soma1 + 0;
        }
        else if (laje == 2)
        {
            soma1 = soma1 + 200;
        }
    }
    else if (tipoMoradia == 2)
    {
        soma1 = soma1 + 0;
    }

    //Bloco 5
    printf ("\n\n");
    printf ("\n Insira o numero de Janelas.....: ");
    printf ("\n .....: ");
    scanf ("%f", &janelas);
    printf ("\n insita o numero de Cortinas.....: ");
    printf ("\n .....: ");
    scanf ("%f", &cortinas);

    //Funcao 5
    totalJanelas = ((janelas * btuJanelas) - (cortinas * btuCortinas));

    //Bloco 6
    printf ("\n\n");
    fflush(stdin);
    printf ("\n Incidencia de Sol [S/N]");
    printf ("\n .....: ");
    scanf ("%c", &vSol);

    //Funcao 6
    if (vSol == 's' || vSol == 'S')
    {
        printf ("\n");
        printf ("\n 1 - Manha");
        printf ("\n 2 - Tarde");
        printf ("\n 3 - Dia todo");
        printf ("\n .....: ");
        scanf ("%f", &periodo);

        //Sub Funcao - Bloco 6
        if (periodo == 1)
        {
            soma1 = soma1 + 0;
        }
        else if (periodo == 2)
        {
            soma1 = soma1 + 200;
        }
        else if (periodo == 3)
        {
            soma1 = soma1 + 250;
        }    
    }
    else if (vSol == 'n' || vSol == 'N')
    {
        soma1 = soma1 + 0;
    }

    //Exibir Resultado
    printf ("\n\n");
    printf ("\n ===== Resultado =====");
    printf ("\n O valor da soma.....: %.1f", soma1);
    return 0;
    }