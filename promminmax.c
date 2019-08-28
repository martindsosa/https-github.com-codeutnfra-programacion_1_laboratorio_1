/*
 ============================================================================
 Name        : promminmax.c
 Author      : martin damian sosa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define  CANTIDADNUMEROS 5

int esMaximo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMaximo);
int esMinimo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMinimo);
float calcularPromedio(float sumaNumeros,int cantidadNumerosIngresados,float *calculoPromedio);
void mostrarResultado(int numeroMaximo,int numeroMinimo,float promedioTotal,int cantidadNumerosIngresados);

int main(void) {
	int numero;
	int numMaximo;
	int numMinimo;
	float promedio;
	float acumNumeros = 0;
	for (int i=0; i<CANTIDADNUMEROS;i++)
	{
		printf("Ingrese el numero: ");
		scanf("%d",&numero);
		acumNumeros = acumNumeros + numero;
		esMaximo(numero,CANTIDADNUMEROS,&numMaximo);
		esMinimo(numero,CANTIDADNUMEROS,&numMinimo);
	}
	calcularPromedio(acumNumeros,CANTIDADNUMEROS,&promedio);
	mostrarResultado(numMaximo,numMinimo,promedio,CANTIDADNUMEROS);
}
int esMaximo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMaximo)
{
	if (numeroIngresado > *numeroMaximo || cantidadNumerosIngresados == 1)
	{
		*numeroMaximo = numeroIngresado;
	}
	return(*numeroMaximo);
}
int esMinimo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMinimo)
{
	if (numeroIngresado < *numeroMinimo || cantidadNumerosIngresados == 1)
	{
		*numeroMinimo = numeroIngresado;
	}
	return(*numeroMinimo);
}
float calcularPromedio(float sumaNumero,int cantidadNumerosIngresados,float *calculoPromedio)
{
	*calculoPromedio = sumaNumero / cantidadNumerosIngresados;
	return (*calculoPromedio);
}
void mostrarResultado(int numeroMaximo,int numeroMinimo,float promedioTotal,int cantidadNumerosIngresados)
{
	printf("El numero maximo es: %d\n",numeroMaximo);
	printf("El numero minimo es: %d\n",numeroMinimo);
	printf("El promedio total es: %f\n",promedioTotal);
	printf("Cantidad de numeros ingresados: %d",cantidadNumerosIngresados);
}
