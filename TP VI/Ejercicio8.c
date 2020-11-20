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
	printf("En la siguiente lista:\n");
	//Creo un puntero char y asigno su valor
	char *lineas =  "Altas\nBajas\nListado\n";
	/*Creo una variable nl y le asigno el resultado de asignar el puntero
	a la funcion de este ejercicio*/
	int nl = cantidad_lineas(lineas);
	//Imprimo el total de lineas
	printf("%s""\nEl total es de: %d lineas!\n",lineas,nl);
	return 0;
}

