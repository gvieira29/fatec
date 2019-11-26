#include <stdio.h>
#include <stdlib.h>

main()
{
    struct ficha_pessoa
    {
        char nome[30];
        int idade;
        float salario;
    };

    int reg;
    int op = -1;
    int i = 0;

    struct ficha_pessoa pessoa[5];

    while (op != 0)
    {
        printf("\n1 - incluir");
        printf("\n2 - listar");
        printf("\n0 - sair\n");
        scanf("&i", &op);

        if(op == 1)
        {
            if(reg <= 4)
            {
                printf("\nNome.......: ");
                scanf("%s", &pessoa[reg].nome);
                printf("\nIdade......: ");
                scanf("%i", &pessoa[reg].idade);
                printf("\nSalario....: ");
                scanf("%f", &pessoa[reg].salario);
                reg = reg + 1;
            }
            else
            {
                printf("Nao cabe mais");
            }
            printf("\nAperte alguma tecla para voltar ao menu");
            getchar();
        }
        else if (op == 2)
        {
            printf("\nListagem de pessoas\n");
            printf("\nNome       Idade       Salario");
            for(i = 0; i < reg; i++)
            {
                printf("\n%s        %i           %.2f", pessoa[i].nome, pessoa[i].idade, pessoa[i].salario);
            }
            printf("\nAperte alguma tecla para voltar ao menu");
            getchar();
        }

        else if (op == 0)
        {
            printf("\nGood Bye");
        }
        else
        {
            printf("\nInvalido");
            getchar();
        }
    }
}
/*
    struct ficha_pessoa pessoa[3];


    for(ct = 0; ct < 3; ct++)
    {
        printf("Nome.......: ");
        //fflush(stdin);
        //fgets(pessoa[ct].nome, 30, stdin);
        scanf("%s", &pessoa.nome);

        printf("Idade......: ");
        scanf("%i", &pessoa[ct].idade);

        printf("Salario....: ");
        scanf("%f", &pessoa[ct].salario);
    }
    for(ct = 0; ct < 3; ct++)
    {
        printf("\n===============\n%s%i\n%.2f\n===============\n", pessoa[ct].nome, pessoa[ct].idade, pessoa[ct].salario);
    }
*/
