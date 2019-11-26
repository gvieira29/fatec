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

    int reg = 5;
    int op = -1;
    int i = 0;

    struct ficha_pessoa pessoa[reg];

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
