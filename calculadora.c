#include<stdio.h>

int soma(int num1, int num2)
{
    return num1 + num2;
}

int subtracao(int num1, int num2)
{
    return num1 - num2;
}
int multiplicacao(int num1, int num2)
{
    return num1 * num2;
}

int divisao(int num1, int num2)
{
    return num1 / num2;
}
void main()
{
    int opc;
    int num1, num2;

    do {
        printf("Soma - 1\n");
        printf("Subtracao - 2\n");
        printf("multiplicacao - 3\n");
        printf("divisao - 4\n");
        printf("Sair - 5\n");
        printf("opc:");
        scanf("%d",&opc);

        switch(opc)
        {
        case 1:
        printf("primeiro numero:");
        scanf("%d",&num1);
        printf("\nsegundo numero:");
        scanf("%d",&num2);
        printf("\nresultado: %d\n", soma(num1, num2));

        break;

        case 2:
        printf("primeiro numero:");
        scanf("%d",&num1);
        printf("\nsegundo numero:");
        scanf("%d",&num2);
        printf("\nresultado: %d\n", subtracao(num1, num2));

        break;

        case 3:
        printf("primeiro numero:");
        scanf("%d",&num1);
        printf("\nsegundo numero:");
        scanf("%d",&num2);
        printf("\nresultado: %d\n", multiplicacao(num1, num2));

        break;

        case 4:
        printf("primeiro numero:");
        scanf("%d",&num1);
        printf("\nsegundo numero:");
        scanf("%d",&num2);
        printf("\nresultado: %d\n", divisao(num1, num2));

        break;
        }

    }while(opc != 5);

}
