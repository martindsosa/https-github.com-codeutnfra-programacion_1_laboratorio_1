/*
 ============================================================================
 Name        : clase2_maxminprom.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int ingresarNumero(char,int*,int*,int*);

int main(void)
{
	int numMaximo;
	int numMinimo;
	int resultado;
	char respuesta = 's';
	printf("Desea ingresar un numero s/n\n");
	fflush(stdin);
	scanf("%c",&respuesta);
	if (respuesta == 's')
	{
		ingresarNumero(respuesta,&numMaximo,&numMinimo,&resultado);
		if(ingresarNumero(respuesta,&numMaximo,&numMinimo,&resultado)==0)
		{
			printf("El numero maximo es: %d\n",numMaximo);
			printf("El numero minimo es: %d\n",numMinimo);
			printf("La cantidad de numeros ingresados es: %d\n",resultado);
		}
		else
		{
			printf("ERROR");
		}
	}

}

int ingresarNumero(char respuesta,int *numMaximo,int *numMinimo, int *resultado)
{
	int retorno = -1;
	int numero;
	int cantidadNumerosIngresados = 0;
	while(respuesta == 's')
	{
		printf ("Ingrese numero \n");
		fflush(stdin);
		scanf("%d",&numero);
		if (numero > *numMaximo || cantidadNumerosIngresados == 0)
		{
			*numMaximo = numero;
		}
		if (numero < *numMinimo || cantidadNumerosIngresados == 0)
		{
			*numMinimo = numero;
		}

		printf("Desea ingresar otro numero \n");
		fflush(stdin);
		scanf("%c",&respuesta);
		cantidadNumerosIngresados ++;
		retorno = 0;
	}
	*resultado = cantidadNumerosIngresados;
	return retorno;
}
