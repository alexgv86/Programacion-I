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
	/*Creo un puntero a un arreglo char y le asigno valores y NULL
	al final para identificar donde termina*/
	char *arrayOpciones[] = { "Altas", "Bajas", "Listado", NULL };
	/*Asigno a la variable opcion el resultado de asignar un titulo
	y el puntero al arreglo char*/
	int opcion = menu("MENU CLIENTES",arrayOpciones);
	//Imprimo el resultado de la opcion seleccionada una vez que sea correcta
	printf("Ud selecciono la opcion de menu %d\n",opcion);
	return 0;
}

