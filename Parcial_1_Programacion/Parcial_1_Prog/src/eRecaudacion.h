/*
 * eRecaudacion.h
 *
 *  Created on: 13 may. 2021
 *      Author: eduar
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ERECAUDACION_H_
#define ERECAUDACION_H_
#define TEXT_SIZE 20
#define QTY_TIPO 3


typedef struct {
	int idTipo;
	char descripcion[TEXT_SIZE];
	int isEmpty;
} eDescripTipoReca;

eDescripTipoReca arrayTipo[QTY_TIPO]={
			{1,"ARBA",0},
			{2,"IIBB",0},
			{3,"GANANCIAS",0}
	};

typedef struct {
	int idRecaudacion;
	int idContribuyente;
	eDescripTipoReca descripTipo;
	int mes;
	float importe;
	int isEmpty;
} eRecaudacion;


void eRecaudacion_Inicializar(eRecaudacion array[], int TAM);

#endif /* ERECAUDACION_H_ */
