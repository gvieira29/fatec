	#include<stdio.h>
	#include<math.h>
	main(){
			char nomeFuncionario[30];
			float salAtual, percentAumento, salNovo, salAumento;
				
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
		
				return 0;
}
