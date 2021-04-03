
#include "bibliotecatp1.h"
#include <stdio.h>
#include <stdlib.h>



  //------------------------------------------------------------------
  //---------------------SUMA-----------------------------------------
int Sumar (int unNumero, int otroNumero)
{
	int suma;

	suma = unNumero + otroNumero;

	return suma;
}
  //------------------------------------------------------------------
  //---------------------RESTA----------------------------------------
 int Restar (int unNumero, int otroNumero)
{
	int resta;

	resta = unNumero - otroNumero;

	return resta;
}

  //------------------------------------------------------------------
  //---------------------DIVISION-------------------------------------
 int Dividir (int unNumero, int otroNumero)
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
 int Multiplicar (int unNumero, int otroNumero)
{
	int multiplicacion;

	multiplicacion = unNumero * otroNumero;

	return multiplicacion;
}

  //------------------------------------------------------------------
  //---------------------FACTORIAL------------------------------------

//factorizacion=factorizar(unNumero(unNumero*factorial(unNumero-1)), otroNumero(otroNumero*factorial(otroNumero-1)));
 int factorizacion (int unNumero, int otroNumero)
  {
	 int i;
	 int factorial1;
	 int factorial2;



	 if(unNumero == 0){
		 factorial1 = 1;
	 }else{
	  for(i=unNumero; i>1;i--){
		  factorial1 = factorial1 * i;
		   }
	  }


	 if(otroNumero == 0){
			 factorial2 = 1;
		 }else{
	  for(i=otroNumero; i>1;i--){
	 		  factorial2 = factorial2 * i;
	 		   }
		 }
	  return factorial1, factorial2;

 }

