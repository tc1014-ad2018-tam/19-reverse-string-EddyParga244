/*
 * Este programa fue realizado como la tarea#19 el 17 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es imprimir un string dado por el usuario al revés.
 *
 * Fecha: 17 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>
#include <string.h>

//Funcion que obtiene la cadena al revés
void cadenaAlReves(char cadena[]){
    printf("Me diste la cadena: %s\n", cadena);
    printf("La cadena al reves es: ");

    //En el ciclo, a i se le asigna la longitud de la cadena en forma de entero menos 1,
    // para que se posicione en el ultimo elemento del string e imprima cada caracter
    //desde el ultimo hasta el primero.
    for(int i=((int)strlen(cadena))-1; i>=0; i--){
        printf("%c", cadena[i]);
    }
}

int main() {
    //Declaracion de variable
    char cadena[100];

    //Se le pide al usuario escribir un texto.
    printf("Escribe un texto: ");
    fgets(cadena, sizeof(cadena),stdin); //Se lee la cadena
    cadenaAlReves(cadena); //Se le  llama a ejecucion a la funcion cadenaAlReves

    return 0;
}