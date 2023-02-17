#include <stdio.h>

#define NL putchar('\n') 
#define PR(fmt, val) printf(#val " = %" #fmt "\t", (val))

#define PRINT1(fmt, x1) PR(fmt, x1), NL
#define PRINT2(fmt, x1, x2) PR(fmt, x1), PRINT1(fmt, x2)
#define PRINT3(fmt, x1, x2, x3) PR(fmt, x1), PRINT2(fmt, x2, x3)
#define PRINT4(fmt, x1, x2, x3, x4) PR(fmt, x1), PRINT3(fmt, x2, x3, x4)
#define PRINT5(fmt, x1, x2, x3, x4, x5) PR(fmt, x1), PRINT4(fmt, x2, x3, x4, x5)

//  Declaraciones Globales 
char car;
int a, b, c, d;
float e, f, g;
double h;
int *ptr;
int arreglo[10];

struct Persona 
{
	char nombre[30];
	int edad;
} Juan, *ptrJuan;


