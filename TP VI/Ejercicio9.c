/*
 * Ejercicio1.c
 * 
 * Copyright 2020 Alejandro Gonzalez Videla <flia@PowerGv>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <consola.h>

int main(int argc, char **argv){
	//Creo un puntero char y le asigno su valor
	char *texto =  "Altas\nBajas\nListado";
	/*Creo una variable nl y le asigno el resultado de asignar el texto
	al ejercicio 8*/
	int nl = cantidad_lineas(texto);
	/*Creo un puntero a un arreglo char con el tamano devuelto por 
	el ejercicio 8*/
	char *lineas[nl];
	//Asigno los valores a la funcion de este ejercicio
	cargo_lineas(texto,lineas);
	//Recorro lineas
	for(int i=0;i<nl;i++) {
		//Imprimo cada linea
		printf("[%s]\n",lineas[i]);
		//Si la linea llega a NULL, libero memoria.
		if ( lineas[i] != NULL ) free(lineas[i]);
	}
	return 0;
}

