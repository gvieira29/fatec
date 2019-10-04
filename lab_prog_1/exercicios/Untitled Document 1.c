#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

    struct ficha_pessoa
    {
        char nome[30];
        int idade;
        float salario;
    };
    struct ficha_pessoa pessoa[3];

    int ct;
    for(ct = 0; ct < 3; ct++){
        printf("Nome.......: ");
        //fflush(stdin);
        //fgets(pessoa[ct].nome, 30, stdin);
        scanf("%s", &pessoa.nome);

        printf("Idade......: ");
        scanf("%i", &pessoa[ct].idade);

        printf("Salario....: ");
        scanf("%f", &pessoa[ct].salario);
    }
    for(ct = 0; ct < 3; ct++){
        printf("\n===============\n%s%i\n%.2f\n===============\n", pessoa[ct].nome, pessoa[ct].idade, pessoa[ct].salario);
    }
    return 0;
}

