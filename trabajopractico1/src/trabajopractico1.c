/******************************************************************************

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
#include "bibliotecatp1.h"



int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int unNumero;
	int otroNumero;
	int suma;
	int resta;
	int division;
	int multiplicacion;
	int factorizacion;
	int factorizar;
	int factorial1;
	int factorial2;



	do
	{
		system("cls");

		printf("Ingrese un numero: ");
		scanf("%d", &unNumero);
		printf("Ingrese otro numero: ");
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
						suma = Sumar(unNumero, otroNumero);
						printf("El resultado de %d + %d es: %d\n",unNumero,otroNumero,suma);
						break;
					case 2:
						resta = Restar(unNumero, otroNumero);
						printf("El resultado de %d - %d es: %d\n",unNumero,otroNumero,resta);
						break;
					case 3:
						division = Dividir(unNumero, otroNumero);
						printf("El resultado de %d / %d es: %d\n",unNumero,otroNumero,division);
						break;
					case 4:
						multiplicacion = Multiplicar(unNumero, otroNumero);
						printf("El resultado de %d * %d es: %d\n",unNumero,otroNumero,multiplicacion);
						break;
					case 5:
						factorizacion = factorizar(unNumero, otroNumero);
						printf("El factorial de %d es: %d y El factorial de %d es: %d\n",unNumero,factorial1,otroNumero,factorial2);
						break;
					case 6:
						printf("GRACIAS POR USAR NUESTRO PROGRAMA\n");
					break;
				}

			}while(opcion!=6);



	return 0;
}

