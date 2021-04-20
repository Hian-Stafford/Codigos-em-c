#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
    float v[5], vm=0.0;
    int i;

    for (i=0; i<=4; i++) //aqui irá iniciar com 0 até 4, com 5 casas para os valores serem guardados, e quando chegar no quinto numero, mostrará o resultado
    {
    //interaçao onde o usuario irá informar os numeros desejados
    printf("Digite 5 numeros: ");
    scanf("%f", &v[i]);
    }

    for (i=0; i<=4; i++)
    {
        if (v[i]>vm) //caso o v seja maior que o maior valor digitado, entao...
        {
            vm = v[i]; //...o vm (valor maior) vai receber o maior numero digitado e substituir o vm, que ali em cima colocamos como 0.0
        }
    }
    printf("\nO maior valor é de %.2f\n", vm); //mostra o maior valor dos 5 numeros digitados com apenas 2 casas decimais

    for (i = 0; i <= 4; i++)
    {
        v[i] = v[i]/vm; //divisao
    }
    for (i = 0; i <= 4; i++)
    //mostra o resultado pronto depois da divisao de todos os numeros pelo maior valor digitado
    printf("\nO resultado dividido pelo maior numero é de: %.2f\n", v[i]);


    return 0;
}
