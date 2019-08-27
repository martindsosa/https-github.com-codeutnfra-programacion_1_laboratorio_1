/*
 ============================================================================
 Name        : clase_2maximominimopromedio.c
 Author      : Sosa Martin Damian
 Version     :
 Copyright   : Your copyright notice
 Description : Calculo de maximo minimos y promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


int ingresarNumero(int *numeroIngresado, int *cantidadNumerosIngresados,float *sumaNumeros);
int esMaximo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMaximo);
int esMinimo(int numeroIngresado,int cantidadNumerosIngresados,int *numeroMinimo);
float calcularPromedio(float sumaNumeros,int cantidadNumerosIngresados,float *calculoPromedio);
void mostrarResultado(int numeroMaximo,int numeroMinimo,float promedioTotal,int cantidadNumerosIngresados);

int main(void)
{
	int numero;
	int numMaximo;
	int numMinimo;
	float promedio;
	float acumNumeros = 0;
	int cantidadNumIngresados = 0;

	while(ingresarNumero(&numero,&cantidadNumIngresados,&acumNumeros) == 0)
	{
		esMaximo(numero,cantidadNumIngresados,&numMaximo);
		esMinimo(numero,cantidadNumIngresados,&numMinimo);
	}
	calcularPromedio(acumNumeros,cantidadNumIngresados,&promedio);
	mostrarResultado(numMaximo,numMinimo,promedio,cantidadNumIngresados);
}

int ingresarNumero(int *numeroIngresado, int *cantidadNumerosIngresados,float *sumaNumeros)
{
	int retorno = -1;
	char respuesta = 's';
	int numero;
	printf("Desea ingresar un numero? s/n \n");
	__fpurge(stdin);
	scanf("%c",&respuesta);
	if (respuesta == 's')
	{
		printf("Ingrese el numero: ");
		scanf("%d",&numero);
		*numeroIngresado = numero;
		retorno = 0;
		*sumaNumeros = *sumaNumeros + numero;
		*cantidadNumerosIngresados =*cantidadNumerosIngresados + 1;
	}
	else
	{
		retorno = -1;
	}
	return (retorno);
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
