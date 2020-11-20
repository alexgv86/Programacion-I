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
	//Creo las variables y les asigno cero
	int n,i,nlineas,nrep=0;
	do{
		printf("Indique la cantidad de repeticiones a ingresar: ");
		/*Asigno el resultado del ingreso por teclado, segun la funcion
		del ejercicio 1 a un puntero char*/
		char *snrep = ingreso1();
		//Transformo el ingreso en numero y lo asigno a nrep
		nrep = atoi(snrep);
		//Libero memoria de snrep
		free(snrep);
	//Mientras el valor ingresado sea valido, seguir pidiendo valores
	}while(nrep<=0);
	//Repito el proceso siguiente la cantidad de veces indicada
	for(n=0;n<nrep;n++){	
		do{
			printf("\nIndique la cantidad de lineas a ingresar: ");
			//Asigno al puntero char sn el valor del resultado de la funcion
			char *sn = ingreso1();
			//Convierto a numero el resultado de lo ingresado
			nlineas = atoi(sn);
			//Libero memoria de sn
			free(sn);
		//Seguir pidiendo si los valores no son correctos
		}while(nlineas<=0);
		//Creo un puntero a un arreglo char con la cantidad de lineas asignadas
		char *lineas[nlineas];
		//Asigno espacio en la memoria para el arreglo y lo pongo en cero
		memset(lineas,0,sizeof(char *)*nlineas);
		printf("Ingrese %d lineas: \n",nlineas);
		//Utilizo el ejercicio 4 para ingresar las lineas de texto
		ingreso4(lineas,nlineas);
		//Creo un arreglo int con la cantidad de lineas ingresadas
		int menmay[nlineas];
		/*Asigno a la funcion del ejercicio 5, la direccion de memoria
		de menmay[0] para obtener los resultados, el puntero lineas y el
		numero de lineas a ingresar*/
		analizo_lineas(&menmay[0],lineas,nlineas);
		//Imprimo los resultados del paso anterior
		printf("La linea mas corta es: [%s] \n",lineas[menmay[2]]);
		printf("La linea mas larga es: [%s]\n",lineas[menmay[3]]);
		// liberar memoria
		for(i=0;i<nlineas;i++) {
			if ( lineas[i] != NULL ) free(lineas[i]); 
		}
	}
	return 0;
}

