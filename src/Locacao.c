/*
 * Locacao.c
 *
 *  Created on: 10 de out de 2017
 *      Author: gabri
 */

#include <string.h>
#include "Locacao.h"


//Função que cria uma data válida
char* criaData(unsigned dia, unsigned mes, unsigned ano)
{
	//Data a ser retornada
	char* data;

	//String auxiliares
	char string_dia [4], string_mes [4], string_ano [5], aux;

	//Aloca espaço para a data
	if (posix_memalign((void*) &data, 64, 10*sizeof(char)))
	{
		//Exibe erro
		printf("Erro de alocação de memória! - Função criaData (Locacao.c)\n\n");
		exit(1);
	}

	//Datas inválidas
	if (dia > 31 || dia < 1 || mes < 1 || mes > 12 || ano > 2017 || ano < 1920)
		return NULL;


	//Converte o dia para string e concatena com a barra
	snprintf(string_dia, 3, "%d", dia);
	strcat(string_dia, "/");

	//Insere o zero se o dia for de 1 dígito
	if (dia < 10)
	{
		strcpy(data, "0");

		//Concatena o dia com a data
		strcat(data, string_dia);
	}
	//Copia a data para iniciar a string data e não concatenar sem ser inicializado
	else
		strcpy(data, string_dia);


	//Insere o zero se o mes for de 1 dígito
	if (mes < 10)
		strcat(data, "0");

	//Converte o mes para string e concatena com a barra
	snprintf(string_mes, 3, "%d", mes);
	strcat(string_mes, "/");

	//Concatena o mes com a data
	strcat(data, string_mes);


	//Converte o ano para string e concatena com a barra
	snprintf(string_ano, 5, "%d", ano);

	//Concatena o ano com a data
	strcat(data, string_ano);

	return data;


}
