#include<stdio.h>
#include<stdlib.h>

int main(){
	double *p,sucursal[10],suma;
	int comprobar,i;
	p = &sucursal[0];
	printf("Ingresaremos cuantas ventas tuvo cada una de las 10 sucursales\n");
	for(i=0;i<10;i++,p++){
		printf("Ingrese las ventas para la sucursal %d\n",i+1);
			comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
			while(getchar()!='\n');
			while(comprobar == 0){
				printf("Solo se admiten numeros enteros!\n");
				printf("Ingrese un numero entero: ");
				comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
				while(getchar()!='\n');
			}
			suma += *p;
	}
	p = &sucursal[0];
	for(i=0;i<10;i++,p++){
		printf("La sucursal %d vendio $%.2lf \n",i+1,*p);
	}
	printf("\nEl total en ventas fue de: $%.2lf",suma);
	return 0;
}
