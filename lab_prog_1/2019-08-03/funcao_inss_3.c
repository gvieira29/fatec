#include<stdio.h>
#include<math.h>
#include"lib_inss.h"

main(){
    float salBruto, inss;

    printf("Digite o Salario Bruto: ");
    scanf("%f", &salBruto);
        inss = calc_inss(salBruto);
    if (inss > 0){
    	printf("O INSS e de: R$%.2f", inss);     
    }
    else if(inss == 0) {
        printf("Valor deve ser maior que zero.");
    }
    return 0;
}
