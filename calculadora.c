#include<stdio.h>

int soma(int num1, int num2)
{
    return num1 + num2;
}

int subtracao(int num1, int num2)
{
    return num1 - num2;
}

void main()
{
    int opc;

    do {

        printf("Soma - 1\n");
        printf("Subtracao - 2\n");
        printf("Sair - 0\n");

    }while(opc != 0);

}
