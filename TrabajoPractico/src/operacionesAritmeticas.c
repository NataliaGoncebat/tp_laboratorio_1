
#include "operacionesAritmeticas.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


  //------------------------------------------------------------------
  //---------------------SUMA-----------------------------------------
int suma (float numero1, float numero2, float* resSuma){
	int retorno = 0;

	if(resSuma !=NULL){
		if(numero1!=0 || numero2!=0){
			*resSuma=numero1+numero2;
			retorno=1;
			}
	}
	return 0;
}

 //------------------------------------------------------------------
  //---------------------RESTA----------------------------------------
int resta(float numero1, float numero2, float* resResta){
	int retorno=0;

		if(resResta !=NULL){
			if(numero1!=0 || numero2!=0){
				*resResta=numero1-numero2;
				retorno=1;
				}
		}
		return 0;
}


  //------------------------------------------------------------------
  //---------------------DIVISION-------------------------------------
int division (float numero1, float numero2, float* resDivision){
	int retorno=0;

			if(resDivision !=NULL){
				if(numero2 !=0){
					*resDivision=numero1/numero2;
					retorno=1;
					}
			}
			return 0;

}

  //------------------------------------------------------------------
  //---------------------MULTIPLICACION-------------------------------
int multiplicacion (float numero1, float numero2, float* resMultiplicacion){
	int retorno=0;

				if(resMultiplicacion !=NULL){
					if(numero2 !=0){
						*resMultiplicacion=numero1*numero2;
						retorno=1;
						}
				}
				return 0;

	}

  //------------------------------------------------------------------
  //---------------------FACTORIAL------------------------------------

int factorizacion(float numero1, float* resFactorizacion){

	int factorial;
	factorial = 1;

	if(numero1 > 0){
		for(int i=numero1; i>1; i--){
				factorial = factorial*i;
		}
		*resFactorizacion = factorial;
	}else{
		*resFactorizacion = 0;
	}
	return 0;
	}
