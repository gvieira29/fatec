#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float btuRes 600;
const float btuCom 800;

const float south 0;
const float southeast 0;
const float north 400
const float northeast 400;
const float midweast 200;

int main(void)
{
    int oplocation;
    float somalocal, somacalor, somatotal;

    switch (regiao)
    {
        case 1 
        {
            sum = sum + south;
            break;
        }
        case 2
        {
            sum = sum + southeast;
            break;
        }
        case 3
        {
            sum = sum + north;
            break;
        }
        case 4
        {
            sum = sum + northeast;
            break;
        }
        case 5
        {
            sum = sum + midweast;
            break;
        }
        default
        {
            -999 //Nao Existe
        }
    }//Fim Switch Região

    printf ("1 - Casa");
    printf ("2 - Apartamento");
    scanf ("%i", &oplocation);

    if (oplocation == 1)
    {
        printf ("1 - Com laje");
        printf ("2 - Sem laje");
        scanf ("%i", &oplaje);
        if (oplaje == 1)
        {
            //Adicionar soma laje
        }
        else if (oplaje == 2)
        {
            //Prosseguir com mesma soma
        }
    }
    else if (oplocation == 2)
    {
        //Prosseguir com mesma soma
    }
    else 
    {
        -998 //Não existe
    }//Fim escolha de local

    printf ("1 - Residencial");
    printf ("2 - Comercial");
    scanf ("%i", &oprc);
    
    if (oprc == 1)
    {
        //Adicionar btuRes
    }
    else if (oprc == 2)
    {
        //Adicionar btuCom
    }

    return 0;
}//Fim da Execução