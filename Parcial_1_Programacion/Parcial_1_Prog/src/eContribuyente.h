/*
 * eContribuyente.h
 *
 *  Created on: 13 may. 2021
 *      Author: eduar
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ECONTRIBUYENTE_H_
#define ECONTRIBUYENTE_H_

typedef struct {
	int idContribuyente;
	char nombre[15];
	char apellido[15];
	int cuil;
	int isEmpty;
} eContribuyente;

void eContribuyente_Inicializar(eContribuyente array[], int TAM);

#endif /* ECONTRIBUYENTE_H_ */
