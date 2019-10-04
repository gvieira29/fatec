#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){

float calc_delta(float a, float b, float c){
	float delta;
	
		delta = (b*b)-(4*a*c);
	
	return calc_delta;
}
float calc_x1(float a, float b, float delta){
	float x1;
	
		x1 = (-b+sqrt(delta))/(2*a);
	
	return calc_x1;
}
float calc_x2(float a, float b, float delta){
	float x2;
		
		(-b-sqrt(delta))/(2*a);
		
	return calc_x2;
}		

	float a, b, c, x1, x2, delta;
	
	printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);
    
    delta = calc_delta(float a,float b, float c);
    x1 = calc_x1(float a.float b, float delta);
    x2 = calc_x2(float a,float b, float delta);
    
    if(delta < 0){
		printf("\nA equacao nao possui raizes reais.\n");
    } 
    else{
        printf("\nO valor de x1: %.2f\n", x1);
        printf("\nO valor de x2: %.2f\n", x2);
    }
    return 0;
}
