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
//Prototipo
char *ingreso();

int main(int argc, char **argv){
	printf("Ingrese un texto de hasta 30 caracteres: ");
	char *p = ingreso();
	printf("Usted ingresó: %s \n",p);
	free(p);//Libero memoria asignada a ingreso.
	return 0;
}
//Implemento función:
char *ingreso(){
//Creo una variable buffer para establecer el límite y con espacio para \0
	char buffer[31];
	int i = 0;
	char c = 0;
	/*Mientras si lo que asigno a c (el caracter) es distinto a un salto
	de linea y menor a 30, seguir*/
	while((c = getchar()) != '\n' && i < 30){
		//Asigno el caracter en la posicion i de buffer
		buffer[i] = c;
		//Sumo 1 a i para seguir recorriendo buffer
		i++;
	}
	//Luego de terminar el recorrido, agrego el valor nulo al final del buffer
	buffer[i]='\0';
	return strdup(buffer);//Retorno un duplicado del vector buffer.
}

