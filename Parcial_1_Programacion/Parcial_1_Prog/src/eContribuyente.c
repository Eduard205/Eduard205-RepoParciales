/*
 * eContribuyente.c
 *
 *  Created on: 13 may. 2021
 *      Author: eduar
 */
#include "eContribuyente.h"

void eContribuyente_Inicializar(eContribuyente array[], int TAM) {
	int i;

	if (array != NULL && TAM > 0) {
		for (i = 0; i < TAM; i++) {
			array[i].isEmpty = 0;
		}
	}
}
