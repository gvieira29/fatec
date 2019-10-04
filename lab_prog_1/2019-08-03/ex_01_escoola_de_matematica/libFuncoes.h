#include<math.h>
//Cabecalho prorama principal
/*void cabecalho(){
    printf("<<< CALCULADORA DE SEGUNDO GRAU >>>");
}*/

//Funcao para calcular o Delta
float calc_delta(float a, float b, float c){
	float delta;

    delta = (b*b)-(4*a*c);
    
    return delta;
}

//Calculo do bascara x1
float cal_bascara_x1(float a, float b, float delta){
	float x1;
    
    x1 = (-b+sqrt(delta))/(2*a);
	
	return x1;
}

//Calculo do bascara x2
float cal_bascara_x2(float a, float b, float delta){
	float x2;
    
    x2 = (-b-sqrt(delta))/(2*a);
    
    return x2;
}
