
#include "bibliotecatp1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


  //------------------------------------------------------------------
  //---------------------SUMA-----------------------------------------
int f_sumar (int unNumero, int otroNumero)
{
	int suma;

	suma = unNumero + otroNumero;

	return suma;
}
  //------------------------------------------------------------------
  //---------------------RESTA----------------------------------------
 int f_restar (int unNumero, int otroNumero)
{
	int resta;

	resta = unNumero - otroNumero;

	return resta;
}

  //------------------------------------------------------------------
  //---------------------DIVISION-------------------------------------
 int f_dividir (int unNumero, int otroNumero)
{
	int division;

	if(otroNumero == 0){
		printf("No es posible dividir por cero.");
		}else{
	 division = unNumero / otroNumero;
		}
	return division;
}
  //------------------------------------------------------------------
  //---------------------MULTIPLICACION-------------------------------
 int f_multiplicar (int unNumero, int otroNumero)
{
	int multiplicacion;

	multiplicacion = unNumero * otroNumero;

	return multiplicacion;
}

  //------------------------------------------------------------------
  //---------------------FACTORIAL------------------------------------

//factorizacion=factorizar(unNumero(unNumero*factorial(unNumero-1)), otroNumero(otroNumero*factorial(otroNumero-1)));
 int f_factorizacion (int unNumero)
  {
	int i=1;
	 int factorial1=1;
	 int factorial2=1;
	 int factorial=1;



	 if(unNumero == 0){
		 factorial = 1;
	 }else{
	  for(i=unNumero; i>1;i--){
		  factorial1 = factorial1 * i;
		   }
	  }
/*

	 if(otroNumero == 0){
			 factorial = 1;
		 }else{
	  for(i=otroNumero; i>1;i--){
	 		  factorial2 = factorial2 * i;
	 		   }
		 }*/
	  return (factorial1);

 }

