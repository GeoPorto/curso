#include <stdio.h>

int menu()
{
    int opcao;

    printf("[CALCULADORA MENU]: --------------------------");
    printf("\n[1] Adição;");
    printf("\n[2] Subtração;");
    printf("\n[3] Multiplicação;");
    printf("\n[4] Divisão;");
    printf("\n[0] Sair.");
    printf("\n----------------------------------------------");

    printf("\n> Selecione uma opção..: ");
    scanf("%d", &opcao);

    if (opcao < 0 || opcao > 4)
        return -1;

    return opcao;
}

void main()
{
    int opcao, calculadora_ativa = 1;

    while (calculadora_ativa)
    {
        do
        {
            opcao = menu();

            if (opcao == -1)
                printf("\n");

        } while(opcao == -1);

        if (opcao == 0)
        {
            printf("\n>> Programa encerrado.");
            calculadora_ativa = 0;
        }

        switch(opcao)
        {
            case 1:

                break;
        }
    }
}
