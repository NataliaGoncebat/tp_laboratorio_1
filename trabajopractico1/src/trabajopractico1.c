/******************************************************************************
GONCEBAT, NATALIA.
1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "bibliotecatp1.h"



int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int unNumero;
	int otroNumero;/*
	int suma;
	int resta;
	int multiplicacion;
    int factorizacion;*/
	//int r_division;

	int factorial1;
	int factorial2;
	int resultado;
	float resultadoFloat;
/*
	do
		{
			printf("\n1.Ingrese un numero: ");
			printf("2.Ingrese otro numero: ");
			printf("3. Suma\n");
			printf("4. Resta\n");
			printf("5. Division\n");
			printf("6. Multiplicacion\n");
			printf("7. Factorizacion\n");
			printf("8. Salir\n");
			printf("Elija una opcion: ");
			scanf("%d", &opcion);

			switch(opcion)
					{
						case 1:
							printf("\nIngrese el primer operando: \n");
							fflush(stdin);
							scanf("%d", &unNumero);
							break;
						case 2:
							printf("\nIngrese el segundo operando: \n");
							fflush(stdin);
							scanf("%d", &otroNumero);
							break;
						case 3:
							resultado = f_sumar(unNumero, otroNumero);
							printf("El resultado de %d + %d es: %d\n",unNumero,otroNumero,resultado);
							break;
						case 4:
							resultado = f_restar(unNumero, otroNumero);
							printf("El resultado de %d - %d es: %d\n",unNumero,otroNumero,resultado);
							break;
						case 5:
							resultadoFloat = f_dividir(unNumero, otroNumero);
							printf("El resultado de %d / %d es: %f", unNumero,otroNumero,resultadoFloat);
							//printf("El resultado es: %f\n",unNumero,otroNumero,resultado);
							break;
						case 6:
							resultado = f_multiplicar(unNumero, otroNumero);
							printf("El resultado de %d * %d es: %d\n",unNumero,otroNumero,resultado);
							break;
						case 7:
							//resultado = f_factorizacion(unNumero, otroNumero);
							factorial1 = f_factorizacion(unNumero);
							factorial2 = f_factorizacion(otroNumero);
							printf("El factorial de %d es: %d y el factorial de %d es: %d\n",unNumero,factorial1,otroNumero,factorial2);
							break;
						case 8:
							printf("GRACIAS POR USAR NUESTRO PROGRAMA\n");
						break;
					}
		}while(opcion!=8);
	*/do
	{
		system("cls");

		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &unNumero);
		printf("Ingrese otro numero: ");
		fflush(stdin);
		scanf("%d", &otroNumero);


		printf("\n1. Suma\n");
		printf("2. Resta\n");
		printf("3. Division\n");
		printf("4. Multiplicacion\n");
		printf("5. Factorizacion\n");
		printf("6. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
				{
					case 1:
						resultado = f_sumar(unNumero, otroNumero);
						printf("El resultado de %d + %d es: %d\n",unNumero,otroNumero,resultado);
						break;
					case 2:
						resultado = f_restar(unNumero, otroNumero);
						printf("El resultado de %d - %d es: %d\n",unNumero,otroNumero,resultado);
						break;
					case 3:
						resultadoFloat = f_dividir(unNumero, otroNumero);
						printf("El resultado de %d / %d es: %f", unNumero,otroNumero,resultadoFloat);
						//printf("El resultado es: %f\n",unNumero,otroNumero,resultado);
						break;
					case 4:
						resultado = f_multiplicar(unNumero, otroNumero);
						printf("El resultado de %d * %d es: %d\n",unNumero,otroNumero,resultado);
						break;
					case 5:
						//resultado = f_factorizacion(unNumero, otroNumero);
						factorial1 = f_factorizacion(unNumero);
						factorial2 = f_factorizacion(otroNumero);
						printf("El factorial de %d es: %d y el factorial de %d es: %d\n",unNumero,factorial1,otroNumero,factorial2);
						break;
					case 6:
						printf("GRACIAS POR USAR NUESTRO PROGRAMA\n");
					break;
				}

			}while(opcion!=6);

	system("cls||clear");


	return 0;
	}

