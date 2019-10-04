#include<stdio.h>
main(){
	
	float n1, n2, media, trabs;
	char nome[30];
	int op;
	
	printf("Digite a opcao desejada: ");
	scanf("%i", &op);	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("DIgite a primeira nota: ");
	scanf("%f", &n1);
	printf("DIgite a segunda nota: ");
	scanf("%f", &n2);
		
		if (op==1){
			media = (n1+n2)/2;
		} else {
			printf("Digite nota de trabalho: ");
			scanf("%f", &trabs);
			media = ((n1+n2)/2) * 0.6 + (trabs*0.4);
		}
	
	printf("a media de %s e de %.2f", nome, media);
	return 0;
}