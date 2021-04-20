#include <stdio.h>
#include <stdlib.h>

int main()
{
    //entrada de dados
    int cont=0, i, vet[10], vetimp[10];
    //interaçao do usuario com for
    for (i = 0; i<10; i++)
        {
        printf("\nDigite o numero: ");
        scanf("%d", &vet[i]);
            //estrutura de condiçao if
            if (vet[i]%2 != 0) //caso o numero dividido por 2 seja 0, o numero é par
                {
                //contador de numeros impares
                vetimp[cont] = vet[i]; //entao como o numero é par, aqui ele irá substituir o valor informado por uma nova variavel, onde será armazenada os numeros impares
                cont++; //o numero se tornará impar se o numero par for somado com +1
                }
        }
    //mostra a mensagem na tela
    printf("\nOs numeros impares são: ");
    //numeros impares que irao aparecer na tela
    for (i = 0; i<cont; i++)
        {
        printf("\n%d\n", vetimp[i]); //aqui o vetimp[i] foi somado com +1 caso o numero seja par e ja foi substituido, entao só vai mostrar numeros impares
        }

    return 0;
}
