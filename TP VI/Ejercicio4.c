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
	//Creo las variables
	int i;
	char *lineas[4];
	//Asigno cero al los valores del puntero lineas
	memset(lineas,0,sizeof(char *)*4);
	printf("Ingrese 4 lineas de texto: \n ");
	//Asigno a la funcion de este ejercicio las 4 lineas
	ingreso4(lineas,4);
	//Recorro los resultados y los imprimo
	for(i = 0;i<4;i++){
		printf("En la linea numero %d ingreso: %s \n",i,lineas[i]);
		//Si la linea es NULL, se llego al final y se libera memoria
		if(lineas[i]!=NULL) free(lineas[i]);
	}
	return 0;
}

