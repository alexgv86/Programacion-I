/*
 * Ejercicio3.c
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
	printf("Ingrese un texto de hasta 30 caracteres: ");
	/*Asigno un limite de 30 al ingreso de la funcion de este ejercicio
	y devuelvo el resultado al puntero p*/
	char *p = ingreso3(30);
	//Imprimo el resultado
	printf("\nUsted ingresó: [%s] \n",p);
	//Libero memoria
	free(p);//Libero memoria asignada a ingreso.
	return 0;
}

