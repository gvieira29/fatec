#include<stdio.h>
#include<math.h>
main(){
	char nomeFamilia[30];
	float rendaAtual, inss;
	
	printf("# Calculo de Desconto de INSS #\n");
   	printf("Digite o nome da Familia: "); 
	scanf("%s", &nomeFamilia);
	printf("Digite a renda bruta da Familia %s: ", nomeFamilia);
	scanf("%f", &rendaAtual);
	
	if(rendaAtual <= 1751.82){
			inss = (rendaAtual * 0.08);
	}else if(rendaAtual > 1751.82 && rendaAtual <= 2919.72){
			inss = (rendaAtual * 0.09);
	}else if(rendaAtual > 2919.72 && rendaAtual <= 5839.45){
			inss = (rendaAtual * 0.11);
   }else{
   			inss = 642.34;
   }
   printf("%s seu INSS e de %.2f\n", nomeFamilia, inss);
   return 0;
}
