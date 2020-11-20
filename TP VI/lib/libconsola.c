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
	int bloque = 32; //Ajusto tamano de los bloques
	int nBloque = 1; //Numero de bloques asignados
	long n = 0; //Numero de caracter ingresado
	char c = 0; //Valor del caracter ingresado
	//Asigno espacio de memoria dinamica al puntero *pInicio
	char *pInicio= (char *) malloc(nBloque*bloque);
	//Mientras lo ingresado sea distinto de enter, seguir.
	while((c = getchar()) != '\n'){
		/*Si n llega al tamano del bloque, este se lleno, y por lo tanto
		tengo que generar otro.*/
		if((n % bloque) == 0){
			if(n>0){
				nBloque++;
				//PRINTF COMENTADO PARA QUE FUNCIONE EJERCICIO 4
				//printf("n vale %li y agrego %d bloques de %d bytes\n",n,nBloque,bloque);
			}else{
				//PRINTF COMENTADO PARA QUE FUNCIONE EJERCICIO 4
				//printf("Agrego el %der bloque de %d bytes\n",nBloque,bloque);
			}
			//Modifico el tamano de pInicio gracias a realloc.
			pInicio = (char *) realloc(pInicio,nBloque*bloque);
			//En caso de que pInicio no tenga nada.
			if(pInicio == NULL) return NULL;
		}
		/*Asigno el valor del caracter a la posicion de memoria de
		pInicio+n (Para no modificar la posicion inicial de pInicio)*/ 
		*(pInicio+n) = c;
		//Sumo 1 al numero de caracteres.
		n++;
	}
	//PRINTF COMENTADO PARA QUE FUNCIONE EJERCICIO 4
	//printf("Numero total de n es: %li y utilizamos %d bloques de %d bytes \n",n,nBloque,bloque);
	*(pInicio+n) = '\0';
	return pInicio;
	
}

//Implemento función para ejercicio 3:
/*Puntero de tipo char con una entrada de tipo int para asignar
largo de la cadena*/
char *ingreso3(int largo){
//Creo una variable buffer para establecer el límite y con espacio para \0
	//Doy una posicion mas al buffer, para que pueda registrar 30 caracteres
	//mas 1 para el NULL
	char *buffer = (char*) malloc(largo+1);
	int i = 0;
	char c = 0;
	//Mientras no se presione enter y el largo sea menor al asignado
	while((c = getchar()) != '\n' && i < largo){
		//Asigno al buffer el caracter ingresado en la posicion i
		buffer[i] = c;
		i++;
	}
	//Al terminar el recorrido, agrego el valor nulo al final.
	buffer[i]='\0';
	return buffer;//Retorno el puntero buffer.
}


//Implemento funcion para ejercicio 4:
/*Retorno de tipo int con ingreso de un puntero a un arreglo char que 
contendra cada linea ingresada y una variable int que asignara
la cantidad de lineas*/
int ingreso4(char *lineas[],int n){
	int i;
	//Recorro la cantidad de lineas ingresadas
	for(i=0;i<n;i++){
		//Asigno la linea i reutilizando el ejercicio numero 2
		lineas[i] = ingreso2();
	}
	//Retorno numero de lineas
	return n;
}

//Implemento funcion para ejercicio 5:
/*Funcion tipo void que analiza el largo de las lineas ingresadas
Como entradas, posee un puntero int para poder ir devolviendo
direcciones de memoria y tener mas de un resultado de la funcion
, un puntero a un arreglo char con las lineas ingresadas y un entero
con la cantidad de lineas a ingresar*/ 
void analizo_lineas(int *maymen,char *lineas[],int n) {
	/*Asigno a la linea cero como mayor y menor, asi como tambien sus
	respectivas ubicaciones*/
	int i,may=strlen(lineas[0]),men=strlen(lineas[0]),pmay=0,pmen=0;
	//recorro las lineas hasta completar la cantidad permitida
	for(i=1;i<n;i++) {
		/*Si el largo de la linea en posicion i es mayor a la mayor
		registrada, asignarla como mayor*/
		if ( strlen(lineas[i]) > may ) {
			may = strlen(lineas[i]);
			pmay = i;
		}
		//Mismo paso que el anterior, pero para menor
		if ( strlen(lineas[i]) < men ) {
			men = strlen(lineas[i]);
			pmen = i;
		}
	}
	/* Asigno a la direccion de memoria indicada al principio los
	valores de los resultados*/ 
	*maymen = men; //Linea mas corta
	*(maymen + 1) = may; //Linea mas larga
	*(maymen + 2) = pmen; //Posicion linea mas corta
	*(maymen + 3) = pmay; //Posicion linea mas larga
}

//Implemento funcion para ejercicio 7:
/*Funcion con retorno int, con ingreso de un puntero char
y un puntero a un arreglo char*/
int menu(char *titulo,char *opciones[]) {
	//Creo las variables que voy a utilizar
	int opcion,ndesde=1,n;
	
	do {
		//Asigno el titulo
		printf("\t%s\n\n",titulo);
		//Asigno 1 a n para arrancar la impresion del menu en 1
		n=1;
		//Recorro el arreglo hasta encontrar NULL
		while(opciones[n-1] != NULL) {
			//Imprimo nro de opcion y nombre de opcion en la posicion
			printf("\t%3d. %s\n",n,opciones[n-1]);
			/*Sumo 1 a n para seguir recorriendo el arreglo y mostrar
			el siguiente numero de opcion del menu*/
			n++;
		}
		//Al terminar el recorrido, imprimir la opcion salir
		printf("\t%3d. Salir\n\n",n);
		printf("Ingrese su Opcion:");
		/*Utilzo la funcion del ejercicio 1 para ingresar un texto
		y lo convierto a numero por medio de la funcion atoi*/
		opcion = atoi(ingreso1());
		//Me fijo si el numero ingresado esta fuera del rango permitido
		if (opcion < ndesde || opcion > n) {
			printf("%d es una opcion incorrecta!\n",opcion);
		} else {
			//Si esta dentro del rango, retorno la funcion ingresada
			return opcion;
		}
	//Todo esto mientras se ingrese una funcion distinta de n que seria salir
	} while(opcion != n);
	//En este caso tambien retorno salir
	return opcion;
}

//Implemento funcion para ejercicio 8:
/*Funcion que retorna la cantidad de lineas ingresadas y se le ingresa
un puntero a un char con cierta cantidad de lineas*/
int cantidad_lineas(char *buffer) {
	//Arranco el contador en 1
	int n=1;
	//Mientras se esté dentro del puntero
	while(*buffer) {
		//Si el caracter es un salto, sumar 1 al conteo de lineas
		if ( *buffer == '\n' ) n++;
		//Ir a la siguiente posicion del puntero
		buffer++;
	}
	return n;//Retorna el numero de lineas
}
//Implemento funcion para ejercicio 9:
/*Funcion void con ingreso de puntero char y puntero a arreglo char*/
void cargo_lineas(char *buffer,char *lineas[]) {
	//Creo las variables y las pongo en cero
	int i=0,n=0,nl=0;
	//Creo un puntero char y le asigno el puntero ingresado
	char *pinicio = buffer;
	//Mientras exista el puntero en la posicion indicada
	while(buffer[i]) {
		//n vuelve a cero
		n=0;
		/*Mientras no llegue al final de buffer y buffer no sea un
		salto de linea*/
		while(buffer[i] && buffer[i] != '\n') {
			//Cuento la cantidad de caracteres
			n++;
			//Recorro buffer
			i++;
		}
		//Asigno el tamanio de n+1 a la linea numero nl
		lineas[nl] = (char *) malloc(n+1);
		/*Copio a linea de posicion nl, el valor de pinicio con un 
		largo de n+1 caracteres*/
		strncpy(lineas[nl],pinicio,n);
		/*muevo pinicio hasta la posicion i+1 para luego seguir
		recorriendolo en la siguiente linea*/
		pinicio = buffer+i+1;
		//Sumo 1 a nl para luego asignar la siguiente linea a lineas
		nl++;
		/*Si el buffer en esa posicion es un enter, sumar 1 al indice
		para luego seguir recorriendolo*/
		if ( buffer[i] == '\n' ) i++;
	}
}
