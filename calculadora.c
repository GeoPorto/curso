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
    float x, y;

    while (calculadora_ativa)
    {
        do
        {
            opcao = menu();

            if (opcao == -1)
                printf("\n");

        } while(opcao == -1);

        switch(opcao)
        {
            case 1:
                printf("\n>> Realizando x + y:");

                printf("\n> Insira x..: ");
                scanf("%f", &x);

                printf("> Insira y..: ");
                scanf("%f", &y);

                printf("\n>> %.2f + %.2f = %.2f\n\n", x, y, x - y);
                break;

            case 2:
                printf("\n>> Realizando x - y:");

                printf("\n> Insira x..: ");
                scanf("%f", &x);

                printf("> Insira y..: ");
                scanf("%f", &y);

                printf("\n>> %.2f - %.2f = %.2f\n\n", x, y, x - y);
                break;

            case 3:
                printf("\n>> Realizando x . y:");

                printf("\n> Insira x..: ");
                scanf("%f", &x);

                printf("> Insira y..: ");
                scanf("%f", &y);

                printf("\n>> %.2f . %.2f = %.2f\n\n", x, y, x * y);
                break;

            case 4:
                printf("\n>> Realizando x / y:");

                printf("\n> Insira x..: ");
                scanf("%f", &x);

                printf("> Insira y..: ");
                scanf("%f", &y);

                printf("\n>> %.2f / %.2f = %.2f\n\n", x, y, x / y);
                break;

            default:
                calculadora_ativa = 0;
                break;
        }
    }

    printf("\n>> Encerrando...");
}
