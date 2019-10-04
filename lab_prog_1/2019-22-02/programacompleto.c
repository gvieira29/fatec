#include<stdio.h>
#include<math.h>
main(){
	int op=-1;
	char nomeFuncionario[30], nomeFamilia[30];
	float salAtual, percentAumento, salNovo, salAumento, rendaAtual, inss;
	
	while(op!=0){
		system("cls");
		printf("# MENU #\n");
		printf("1- Calcular Aumento de Salario\n");
		printf("2- Calcular Desconto do INSS\n");
		printf("0- Para sair\n");
		printf("Opcao == ");
		scanf("%i", &op);
		if(op==1){
			system("cls");
			printf("# Calculo de Aumento de Salario #\n");
			printf("Digite o nome do Funcionario: ");
			scanf("%s", &nomeFuncionario);
			printf("Digite o Salario Atual do Funcionario %s: ", nomeFuncionario);
			scanf("%f", &salAtual);
			printf("Digite o Percentual de Aumento desejado (Por Exemplo: 15.7): ");
			scanf("%f", &percentAumento);
				salAumento = salAumento + (salAtual*(percentAumento/100));
				salNovo = salAumento + salAtual;
			printf("\nO Funcionario %s, com salario de R$%.2f;\nRecebe um aumento de %.1f%%;\nNo valor de R$%.2f:\nPassando a receber R$%.2f.\n", nomeFuncionario, salAtual, percentAumento, salAumento, salNovo);
			printf("Digite qualquer tecla para encerrar.\n");
			getch();
			}		
		else if(op==2){
			system("cls");
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
   			printf("Digite qualquer tecla para encerrar.\n");
   			getch();
			}  		
		else if (op==0){
   			system("cls");
			printf("O programa sera encerrado.\n");
			}		
     	else {
   			system("cls");
			printf("Opcao nao existe.\n");
   			printf("Digite qualquer tecla para voltar ao menu anterior.\n");
   			getch();
			}
	}
	return 0;
}