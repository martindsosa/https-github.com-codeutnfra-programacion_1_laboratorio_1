/*
 ============================================================================
 Name        : 2_0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_EMPLEADOS 500 //se utiliza para numero fijos. Reemplaza en el codigo
#define MAX_INT 4294967296

int sumaEnteros(int ,int,int*);

int main(void)
{
	int primerValor;
	int segundoValor;
	int resultado;

	printf("Valor 1?\n");
	scanf("%d",&primerValor);
	printf("Valor 2?\n");
	scanf("%d",&segundoValor);
	if(sumaEnteros(primerValor,segundoValor,&resultado)==0)
	{
		printf("El resultado es %d\n",resultado);
	}
	else
	{
		printf ("Error");
	}
}

int sumaEnteros(int primerValorSumar,int segundoValorSumar,int *resultado)	//el nombre de la funcion muestra lo que que hace
{
	int retorno = -1;
	long resultadoLong; // el nombre de la variable dice lo que contiene

	resultadoLong = primerValorSumar + segundoValorSumar;
	if (resultadoLong <= MAX_INT)
	{
		retorno = 0;
		*resultado = (int)resultadoLong;
	}

	return retorno;
}// todas las funciones deben devolver si salio bien o mal(positivo(0) = bien negativo (-1)=mal)


