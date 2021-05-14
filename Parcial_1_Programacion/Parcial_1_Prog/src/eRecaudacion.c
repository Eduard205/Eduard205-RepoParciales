/*
 * eRecaudacion.c
 *
 *  Created on: 13 may. 2021
 *      Author: eduar
 */

#include "eRecaudacion.h"


void eRecaudacion_Inicializar(eRecaudacion array[], int TAM) {
	int i;

	if (array != NULL && TAM > 0) {
		for (i = 0; i < TAM; i++) {
			array[i].isEmpty = 0;
		}
	}
}


