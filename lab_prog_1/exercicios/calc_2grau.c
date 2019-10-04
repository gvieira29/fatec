#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void cabecalho()
{
    printf("\n-------------------------------------\n");
    printf("<<< CALCULADORA DE SEGUNDO GRAU >>>");
    printf("\n-------------------------------------\n\n");
}

//funcao para calcular o d elta
int calc_delta(float a, float b, float c)
{   float delta;

    if(a!=0)
    {
        delta = (b*b)-(4*a*c);
    }else{
        delta=-999;
    }

    return delta;
}

//calculo do bascara x1
float cal_bascara_x1(int a, int b, int delta)
{   float x1;

    if(a!=0){
        if(a>0){
            if(delta==0){
                x1 = -(b)/(2*a); //uma unica raiz
            }else if(delta>0){
                x1 = (-(b) + sqrt(delta))/(2*a); //duas raizes reais
            }else{
                x1 = -996; //delta negativo
            }
        }else{
            x1 = -997;//(A) e negativo
        }
    }else{
        x1 = -998;//(A) e zero
    }

    return x1;
}

//calculo do bascara x1
float cal_bascara_x2(int a, int b, int delta)
{   float x2;

    if(a!=0){
        if(a>0){
            if(delta==0){
                x2 = -8888;
            }else if(delta>0){
                x2 = (-b + sqrt(delta))/(2*a); //duas raizes reais
            }else{
                x2 = -996; //delta negativo
            }
        }else{
            x2 = -997;//(A) e negativo
        }
    }else{
        x2 = -998;//(A) e zero
    }

    return x2;
}

int main()
{   float a, b, c;
    float delta, x1, x2;
    int erro = -1
    
    cabecalho();

    while(erro==-1)
    {
        printf("\nDigite o valor de A: ");
        scanf("%f", &a);
        printf("\nDigite o valor de B: ");
        scanf("%f", &b);
        printf("\nDigite o valor de C: ");
        scanf("%f", &c);

        delta = calc_delta(a, b, c);
        x1 = cal_bascara_x1(a, b, delta);
        x2 = cal_bascara_x2(a, b, delta);
        
        if(delta==-999)
        {
            printf("")
        }
        
        printf("\n\ndelta = %.2f", delta);
    }
}


