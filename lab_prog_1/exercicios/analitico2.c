#include<stdio.h>
main(){
	
	int op;
	float km, litros, consumo, autonomia;
	
	printf("== ANALITICO DO VEICULO ==\n");
	printf("=== 1 Consumo do Veiculo =\n");
	printf("=== 2 Autonomia ==========\n");
	printf("==- Entre com a opcao: ");
	scanf("%i", &op);
	
		if (op == 1){
		
			printf("======= ANALISE 1 ========\n");
			printf("=== Consumo do Veiculo ===\n");
			printf("Quantos Km o veiculo percorreu? ");
			scanf("%f", &km);
			printf("Quantos litros consumidos? ");
			scanf("%f", &litros);
				consumo = km/litros;
			printf("A media de consumo do veiculo e de %.1f", consumo);
		
		} else if (op == 2){
			
			printf("======= ANALISE 2 ========\n");
			printf("======= Autonomia ========\n");
			printf("Qual o consumo medio? ");
			scanf("%f", &consumo);
			printf("Quantos litros possui no tanque? ");
			scanf("%f", &litros);
				autonomia = consumo * litros;
			printf("A autonomia e de %.1f,", autonomia);
		
		} else {
			
			printf("Opcao nao existe!\n");	
		}	
	return 0;
}
