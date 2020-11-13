/*
 * libconsola.c
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
 * MODULO DE IMPLEMENTACION PARA LA LIBRERIA CONSOLA
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <consola.h>

//Implemento función para ejercicio 1:
char *ingreso1(){
//Creo una variable buffer para establecer el límite y con espacio para \0
	char buffer[31];
	int i = 0;
	char c = 0;
	while((c = getchar()) != '\n' && i < 30){
		buffer[i] = c;
		i++;
	}
	buffer[i]='\0';
	return strdup(buffer);//Retorno un duplicado del vector buffer.
}

//Implemento funcion para ejercicio 2:
char *ingreso2(){
//Creo una variable buffer para establecer el límite y con espacio para \0
	int bloque = 128; //Ajusto tamano de los bloques
	int nBloque = 1; //Numero de bloques asignados
	long n = 0; //Numero de caracter ingresado
	char c = 0; //Valor del caracter ingresado
	char *pInicio= (char *) malloc(nBloque*bloque);
	while((c = getchar()) != '\n'){
		if(n>0 && (n % bloque) == 0){
			//Si n llega al tamano del bloque, este se lleno, y por lo tanto
			// tengo que generar otro.
			nBloque++;
			printf("Tengo %li digitos y %d bloques de %d bytes\n",n,nBloque,bloque);
			pInicio = (char *) realloc(pInicio,nBloque*bloque);
			if(pInicio == NULL) return NULL;
		}
		*(pInicio+n) = c;
		n++;
	}
	*(pInicio+n) = '\0';
	return pInicio; //Asigna memoria
	
}

//Implemento función para ejercicio 3:
char *ingreso3(int largo){
//Creo una variable buffer para establecer el límite y con espacio para \0
	//Doy una posicion mas al buffer, para que pueda registrar 30 caracteres
	//mas 1 para el NULL
	char *buffer = (char*) malloc(largo+1);
	int i = 0;
	char c = 0;
	while((c = getchar()) != '\n' && i < largo){
		buffer[i] = c;
		i++;
	}
	buffer[i]='\0';
	return buffer;//Retorno el puntero buffer.
}
