#include "pedirNumero.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int pedirNumero( float* numero1 ){
	float num;
	printf("Ingresar operando: ");
	scanf("%f", &num);
	*numero1 = num;
	return 0;
}
