#include <stdio.h>			//  Para las rutinas de  I/O
#include <stdlib.h>			//  Para system()
#include "defs.h"

void bases() 
{
	// Bases en C
	a = 179;
	printf("179 Base 10 es %o en base 8\n", a);			//  %o = Base 8
	printf("179 Base 10 es %X en base 16\n", a);		//  %x = Base 16

	a = 0263;					//  Numero en base 8 comineza con 0
	printf("263 Base 8 es %d en base 10\n", a);
	printf("263 Base 8 es %X en base 16\n", a);

	a = 0xB3;					// Numero en base 16 Comienza con 0x
	printf("B3 Base 16 es %d en base 10\n", a);
	printf("B3 Base 16 es %o en base 8\n", a);
}
void primarios() 
{
	//  Jerarquía nivel 1: Operadores Primarios
	// perador paréntesis ( () )
	PRINT1(d, 3 + 4 * 5);
	PRINT1(d, (3 + 4) * 5);
	PRINT1(d, (1 * 2) + (5 + 6));

	printf("Numero Aleatorio: %d\n", rand() );

	//  Operador Corchetes ( [] )
	arreglo[5] = 5;

	// Operador Punto -Parte de una estructura- ( . ) para VARIABLES estructura
	Juan.edad = 25;
	PRINT1(d, Juan.edad);

	// Operador Flecha -Parte de una estructura- ( -> ) para apuntadores a estructura
	ptrJuan = &Juan;
	PRINT1(d, ptrJuan -> edad);
}
int main()
{
	//  Jerarquía nivel 2 - Operadores Unarios
	//  Operador Negación ( ! ) 
	if(0)
		printf("Es verdadero.\n");
	else
		printf("Es Falso\n");

	a = 5;
	PRINT1(d, a);
	PRINT1(d, !a);
	PRINT1(d, !!a);
	PRINT1(d, !!!!!!!!!!!!a);

	system("pause");
	return 0;
}

