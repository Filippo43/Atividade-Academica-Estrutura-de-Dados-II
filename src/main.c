/*
 * main.c
 *
 *  Created on: 10 de out de 2017
 *      Author: gabri
 */

char recebeResposta();
void limpaBuffer();

#include <stdio.h>
#include "Locacao.h"

int main(int argc, char **argv)
{

	//Armazena a opção do usuário
	int opcao;

	//Enquanto o usuário não desejar sair
	while (1)
	{

		//Opções
		printf("Entre com a opção desejada:\n");
		printf("\t2-Sair\n\n");

		//Limpa o buffer
		limpaBuffer();

		//Recebe a opção do usuário
		scanf("%d", &opcao);

		//Limpa o buffer
		limpaBuffer();

		switch (opcao)
		{

		case 1:
			break;
		case 2:
			return 0;
			break;

		default:
			printf("Opção Inválida!\n\n");

			break;
		}

	}

	return 0;

}

void limpaBuffer()
{
	//Limpa o buffer
	setbuf(stdin, NULL);
	fflush(stdout);

	return;
}

char recebeResposta()
{
	//Limpa o buffer
	fflush(stdout);

	//Armazena a resposta do usuário
	char resposta;

	//Enquanto não for digitado uma resposta válida
	do{
		scanf("%c", &resposta);
	}
	while(resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N');

	//Retorna sim
	if (resposta == 's' || resposta == 'S')
		return 's';

	//Retorna não
	else
		return 'n';

}

