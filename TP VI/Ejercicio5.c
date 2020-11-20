/*
 * Ejercicio5.c
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
	//Creo las variables
	int i;
	char *lineas[4];
	//Asigno valor cero a las lineas
	memset(lineas,0,sizeof(char *)*4);
	printf("Ingrese 4 lineas: \n");
	//Reutilizo funcion de ejercicio 4 para ingresar los valores
	ingreso4(lineas,4);
	//Recorro las lineas
	for(i=0;i<4;i++) {
		//Imprimo los resultados
		printf("\nLinea numero %d: [%s]",i,lineas[i]);
	}
	//Creo un arreglo int del tamano de la cantidad de lineas
	int menmay[4];
	/*Utilizo la funcion de este ejercicio asignando la direccion de memoria
	de menmay[0], las lineas ingresadas y las 4 lineas*/
	analizo_lineas(&menmay[0],lineas,4);
	//Imprimo los resultados utilizando posiciones de memoria de menmay
	printf("\n\nLa linea mas corta tiene %d caracteres.\n",menmay[0]);
	printf("La linea mas larga tinee %d caracteres.\n",menmay[1]);
	printf("posicion de linea menor: %d\n",menmay[2]);
	printf("posicion de linea mayor: %d\n",menmay[3]);
	// liberar memoria
	for(i=0;i<4;i++) {
		if ( lineas[i] != NULL ) free(lineas[i]); 
	}
	return 0;
}

