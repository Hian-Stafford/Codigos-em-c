#include <stdio.h>
#include <stdlib.h>

int main()
{
    //introducao de variaveis
    float altura, base, area;
    //tema do programa
    printf("\n\nPrograma que calcula a área de um triângulo\n\n");
    //interacao com o usuario
        printf("Digite a altura do triangulo: ");
        scanf("%f", &altura);

        printf("Digite a base do triangulo: ");
        scanf("%f", &base);
    //calculo da area do triangulo
        area = (altura*base)/2;
    //estrutura de condicao
        if (altura == 0, base == 0) //caso os valores sejam nulos, retornara invalido
        {
            printf("Valor inválido");
        }
    //caso nao haja valores nulos, vai mostrar o resultado do calculo
        else
        {
            printf("a área desse triangulo é de %.2f", area);
        }

    return 0;
}
