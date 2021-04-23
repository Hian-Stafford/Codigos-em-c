#include<stdio.h>
#include<stdlib.h>

int tam = 2, topo = -1, valor;
int pilha[2];


void empilha()
{
	if(topo == tam - 1)
	{
		printf("\n *Pilha cheia*\n");
	}
	else
	{
		topo++;
		pilha[topo] = valor;
	}
}


void desempilha()
{
	if(topo == -1)
	{
		printf("\n *Pilha vazia*\n");
	}
	else
	{
		valor = pilha[topo];
		topo--;
	}
}

void main()
{
	int operador, r;
	float resultado;

	do
    {
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor);
	empilha();

	printf("Digite o segundo valor: ");
	scanf("%d", &valor);
	empilha();

	printf("\nEscolha a operação: \n 1-> '+'\n 2->'-'\n 3->'*'\n 4->'/'\n");
	scanf("%d", &operador);

	if(operador == 1)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor + resultado;
	}
	if(operador == 2)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor - resultado;
	}
	if(operador == 3)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor * resultado;
	}
	if(operador == 4)
	{
	    if (valor == 0)
        {
            printf("Valor invalido");
        }
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor / resultado;
	}

	printf("\no resultado e: %.2f\n", resultado);

	printf("\nDigite 0 para reiniciar ou 1 para finalizar: \n");
	scanf("%d", &r);
} while (r == 0);
	return 0;
}
