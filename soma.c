#include <stdio.h>

int soma(int n1, int n2)
{
    int resul = n1 + n2;
    return resul;
}

int main()
{

    int valor1 = 8;
    int valor2 = 4;
    int resultadoFinal = soma(valor1, valor2);
    printf("a soma é: %d\n", resultadoFinal);
    return 0;
}
