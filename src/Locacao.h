/*
 * Locacao.h
 *
 *  Created on: 10 de out de 2017
 *      Author: gabri
 */

#ifndef SRC_LOCACAO_H_
#define SRC_LOCACAO_H_

#include <stdlib.h>
#include <stdio.h>
#include "Cliente.h"
#include "Dvd.h"

//Estrutura de  uma Locação
typedef struct locacao
{
	//Código do Cliente
	int codigo_cliente;

	//Código do DVD
	int codigo_dvd;

	//String com a data da locação
	char data_locacao[10];

	//String com a data da devolução
	char data_devolucao[10];

	//Boleana para devolução
	int estado;		//0 = Não devolvido, 1 = Devolvido

} Locacao;

//Protótipos
char* criaData(unsigned dia, unsigned mes, unsigned ano);

#endif /* SRC_LOCACAO_H_ */
