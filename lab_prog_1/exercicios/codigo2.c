#include<stdio.h>

main(){
	//Variaveis definidas
	float n1, n2, media, trabs;
	char nome[30];
	
	//Linha de comandos
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("DIgite a primeira nota: ");
	scanf("%f", &n1);
	printf("DIgite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite nota de trabalho: ");
	scanf("%f", &trabs);
	
	//Operacao de media
	media = ((n1+n2)/2) * 0.6 + (trabs*0.4);
	
	//Resultado
	printf("a media de %s e de %.2f", nome, media);
	
	
	/* Variavel %s e variavel %f é atribuida de String e Float */
	return 0;
}
