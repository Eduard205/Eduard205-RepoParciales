/*
 ============================================================================
 Name        : Parcial_1_Prog.c
 Author      : Eduard Brito Hernandez - Divisi�n: 1-E
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "eRecaudacion.h"
#include "eContribuyente.h"
#define TAM_ARRAY 50

int main(void) {
	setbuf(stdout, NULL);

	eRecaudacion recaudacion[TAM_ARRAY];
	eContribuyente contribuyente[TAM_ARRAY];

	eRecaudacion_Inicializar(recaudacion, TAM_ARRAY);
	eContribuyente_Inicializar(contribuyente, TAM_ARRAY);



	return EXIT_SUCCESS;
}
