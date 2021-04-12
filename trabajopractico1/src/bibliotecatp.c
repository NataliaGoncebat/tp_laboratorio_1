
#include "bibliotecatp1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


  //------------------------------------------------------------------
  //---------------------SUMA-----------------------------------------
int f_sumar (int unNumero, int otroNumero)
{
	int resultado;

	setbuf(stdout, NULL);
	resultado = unNumero + otroNumero;


	return resultado;
}
  //------------------------------------------------------------------
  //---------------------RESTA----------------------------------------
 int f_restar (int unNumero, int otroNumero)
{
	int resultado;

	setbuf(stdout, NULL);
	resultado = unNumero - otroNumero;

	return resultado;
}

  //------------------------------------------------------------------
  //---------------------DIVISION-------------------------------------
 float f_dividir (float unNumero, float otroNumero)
{
	float resultado;

	setbuf(stdout, NULL);

	if(otroNumero == 0){
		printf("No es posible dividir por cero.");
		}else{
			resultado = unNumero / otroNumero;
		}
	return resultado;
}
  //------------------------------------------------------------------
  //---------------------MULTIPLICACION-------------------------------
 int f_multiplicar (int unNumero, int otroNumero)
{
	int resultado;

	setbuf(stdout, NULL);
	resultado = unNumero * otroNumero;

	return resultado;
}

  //------------------------------------------------------------------
  //---------------------FACTORIAL------------------------------------


 int f_factorizacion (int unNumero)
  {
	 int resultado;
	 if(unNumero == 0){
	 	resultado = 1;
	 	 }else{
	 		resultado=unNumero*f_factorizacion(unNumero-1);
	 	 }
	 return resultado;
	 }
