// O programa calcula e mostra o resultado de uma equacao do segundo grau.

//Blibliotecas necessárias
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"libFuncoes.h"

//Programa principal
main (){
    
    //Variaveis definidas
    float a, b, c, x1, x2, delta;
    
    //Faz a leitura dos dados necessários para equação
    printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);

        delta = calc_delta;
        x1  =  cal_bascara_x1;
        x2 = cal_bascara_x2;
        
        if (delta < 0){
            printf("A equacao nao possui raizes reais.\n");
        } 
        else{
            printf("O valor de x1: %.2fn", x1);
            printf("O valor de x2: %.2fn", x2);
        }
    return 0;
}
