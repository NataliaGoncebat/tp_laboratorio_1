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
#include "operacionesAritmeticas.h"
#include "pedirNumero.h"

int pedirNumeroA(float* resultado1);
int pedirNumeroB(float numero2, float* resultado2);
int suma (float numero1, float numero2, float* resSuma);
int resta(float numero1, float numero2, float* resResta);
int division (float numero1, float numero2, float* resDivision);
int multiplicacion (float numero1, float numero2, float* resMultiplicacion);
int factorizacion (float numero1, float* resFactorizacion);


int main(void) {
	setbuf(stdout,NULL);

	int opcion=0;
	float primerOperando;
	float segundoOperando;
	float resSuma;
	float resResta;
	float resDivision;
	float resMultiplicacion;
	float resFactorizacion;
	float resFactorizacion2;
	int retFuncion;

	int bandera1=0;
	int bandera2=0;
	//int retorno;

	do{
		printf("\n1.Ingresar 1er operando \n");
		printf("2. Ingresar 2do operando \n");
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
		printf("Elija una opcion: \n");
		scanf("%d", &opcion);
		printf("\n");

		switch(opcion)
		{
		case 1:
		   pedirNumero(&primerOperando);
			bandera1 = 1;
			break;
		case 2:
			if (bandera1 == 1){
				//segundoOperando = pedirNumeroA("Ingresar 2do operando: ");
				pedirNumero(&segundoOperando);
				bandera2 = 1;
			}
			break;
		case 3:
			if (bandera1 == 1 && bandera2 == 1){
				retFuncion = suma (primerOperando, segundoOperando, &resSuma);
				retFuncion =  resta (primerOperando, segundoOperando, &resResta);
				retFuncion = division (primerOperando, segundoOperando, &resDivision);
				retFuncion = multiplicacion (primerOperando, segundoOperando, &resMultiplicacion);
				retFuncion = factorizacion (primerOperando, &resFactorizacion);
				retFuncion = factorizacion (segundoOperando, &resFactorizacion2);
			}
		break;
		case 4:
			printf("RESULTADOS:\n");
			printf("El resultado de %f + %f es: %f\n",primerOperando,segundoOperando,resSuma);
			printf("El resultado de %f - %f es: %f\n",primerOperando,segundoOperando,resResta);
			printf("El resultado de %f / %f es: %f\n",primerOperando,segundoOperando,resDivision);
			printf("El resultado de %f * %f es: %f\n",primerOperando,segundoOperando,resMultiplicacion);
			printf("El factorial de %f es: %2.f\n",primerOperando,resFactorizacion);
			printf("El factorial de %f es: %2.f\n",segundoOperando,resFactorizacion2);
		break;

		}

	}while(opcion!=5);

	printf("\nPrograma terminado");

	return EXIT_SUCCESS;
}
