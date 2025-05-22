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

    printf("\n>> Selecione uma opção..: ");
    scanf("%d", &opcao);

    if (opcao < 0 || opcao > 4)
        return -1;

    return opcao;
}

void main()
{

}
