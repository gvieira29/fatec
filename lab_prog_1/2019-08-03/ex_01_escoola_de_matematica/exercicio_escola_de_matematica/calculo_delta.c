#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c, x1, x2, delta;
	
	printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);
    
    delta = (b*b)-(4*a*c);
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    
    if(delta < 0){
		printf("\nA equacao nao possui raizes reais.\n");
    } 
    else{
        printf("\nO valor de x1: %.2f\n", x1);
        printf("\nO valor de x2: %.2f\n", x2);
    }
    return 0;
}
