#ifndef OPERACIONESARITMETICAS_H_
#define OPERACIONESARITMETICAS_H_

#include <stdlib.h>
#include <conio.h>


/**
 * @brief Funcion que recibe dos numeros flotantes,los suma y devuelve el resultado por parametro.
 * @param Primer operando a sumar.
 * @param Segundo operando a sumar.
 * @param Puntero a la variable que guarda el resultado.
 * @return Retorna o si funciona bien, 1 si funciona mal, -1 si el puntero es nulo.
 */
int suma (float numero1, float numero2, float* resSuma);
/**
 * @brief Funcion que recibe dos numeros flotantes,los resta y devuelve el resultado por parametro.
 * @param Primer operando a restar.
 * @param Segundo operando a restar.
 * @param Puntero a la variable que guarda el resultado.
 * @return Retorna o si funciona bien, 1 si funciona mal, -1 si el puntero es nulo.
 */
int resta(float numero1, float numero2, float* resResta);
/**
 * @brief Funcion que recibe dos numeros,los divide y devuelve el resultado por parametro.
 * @param dividendo.
 * @param divisor.
 * @param Puntero a la variable que guarda el resultado.
 * @return Retorna o si funciona bien, 1 si funciona mal, -1 si el puntero es nulo.
 */
int division (float numero1, float numero2, float* resDivision);
/**
 * @brief Funcion que recibe dos numeros flotantes,los multiplica y devuelve el resultado por parametro.
 * @param Primer operando a multiplicar.
 * @param Segundo operando a multiplica.
 * @param Puntero a la variable que guarda el resultado.
 * @return Retorna o si funciona bien, 1 si funciona mal, -1 si el puntero es nulo.
 */
int multiplicacion (float numero1, float numero2, float* resMultiplicacion);
/**
 * @brief Funcion que recibe dos numeros flotantes,los factoriza y devuelve el resultado por parametro.
 * @param Primer operando a factorizar.
 * @param Primer operando a factorizar.
 * @param Puntero a la variable que guarda el resultado.
 * @return Retorna o si funciona bien, 1 si funciona mal, -1 si el puntero es nulo.
 */
int factorizacion (float numero1, float* resFactorizacion);


#endif /* OPERACIONESARITMETICAS_H_ */

