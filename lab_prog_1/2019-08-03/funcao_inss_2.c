#include<stdio.h>
#include<math.h>

float calc_inss(float renda);

main(){
    float salBruto, inss;

    printf("Digite o Salario Bruto: ");
    scanf("%f", &salBruto);
        inss = calc_inss(salBruto);
    if (inss > 0){
    	printf("O INSS e de: R$%.2f", inss);     
    }
    else if(inss == 0) {
        inss = -999;
    }
    else {
        inss = -998;
    }
    return 0;
}

float calc_inss(float renda){
    float inss;
    
    if(renda > 0){
        if(renda <= 1751.82){
		    inss = (renda * 0.08);
	    }
        else if(renda > 1751.82 && renda <= 2919.72){
		    inss = (renda * 0.09);
	    }   
        else if(renda > 2919.72 && renda <= 5839.45){
		    inss = (renda * 0.11);
        }   
        else{
   		    inss = 642.34;
   	    }
        return inss;
    }
}

