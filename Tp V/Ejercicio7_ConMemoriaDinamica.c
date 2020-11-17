#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//Declaro las variables y asigno valor cero para limpiar registros:
	double comprobar = 0;
	int i, nsuc, comprobarsuc = 0;

	//Ingresamos la cantidad de sucursales:
	printf("Ingrese la cantidad de sucursales: ");
	comprobarsuc = (scanf("%d",&nsuc) == 1) ? 1 : 0;
	while(getchar()!='\n');
	while(comprobarsuc == 0){
		printf("Solo se admiten numeros enteros!\n");
		printf("Ingrese un numero entero: ");
		comprobarsuc= (scanf("%d",&nsuc) == 1) ? 1 : 0;
		while(getchar()!='\n');
	}
	double *tventas = (double *) calloc(nsuc,sizeof(double));
	if(tventas != NULL){
		printf("Se establecieron %d sucursales \n",nsuc);
		printf("Ingresaremos el total de ventas que tuvo cada una de las %d sucursales.\n",nsuc);
		//Comenzamos a recorrer el arreglo, utilizando i y *p
		for(i=0;i<nsuc;i++){
			printf("Ingrese cuanto vendio la sucursal %d\n",i+1);
			//Comprobamos datos ingresados:
			comprobar = (scanf("%lf",tventas+i) == 1) ? 1 : 0;
			//Purgamos entrada de teclado:
			while(getchar()!='\n');
			//Pedimos datos correctos:
			while(comprobar == 0){
				printf("Solo se admiten numeros!\n");
				printf("Ingrese un numero: ");
				comprobar = (scanf("%lf", tventas+i) == 1) ? 1 : 0;
				while(getchar()!='\n');
			}
		}
		//Imprimimos los resultados:
		for(i=0;i<nsuc;i++){
			printf("La sucursal %d vendio $%.2lf \n",i+1,*(tventas+i));
		}
		free(tventas);
	}else{
		printf("No se pueden asignar %d elementos de tipo double!\n",nsuc);
	}
	return 0;
}
