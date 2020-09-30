#include<stdio.h>
#include<stdlib.h>

int main(){
	//Empresa dividida en 3 zonas, 4 sucursales y 2 vendedores
	//Declaro las variables y las pongo en cero:
	double empresa[3][4][2],*p,tSuc[4],tZona[3];
	double comprobar, total = 0;
	int zona,suc,vend = 0;
	//Apunto con el puntero al valor inicial del arreglo empresa:
	p = &empresa[0][0][0];
	//Pongo en cero la empresa:
	for(zona=0;zona<24;zona++,p++){
		*p = 0.0;
	}
	//Pongo en cero zona y vuelvo a apuntar con p a la empresa:
	zona = 0;
	p = &empresa[0][0][0];
	
	printf("Totalizaremos todas las ventas de la empresa:\n");
	//Recorro las zonas:
	for(zona=0;zona<3;zona++){
		//Recorro las sucursales:
		for(suc=0;suc<4;suc++){
			//Recorro los vendedores:
			for(vend=0;vend<2;vend++,p++){
				printf("Ingrese las ventas para el vendedor %d "
						"de la sucursal %d de la zona %d\n",
						vend+1,suc+1,zona+1);
					//Ingreso y compruebo los valores ingresados:
					comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
					//Purgo la entrada de teclado:
					while(getchar()!='\n');
					//Solicito valores válidos:
					while(comprobar == 0){
						printf("Error! Ingrese un numero: ");
						comprobar = (scanf("%lf",p) == 1) ? 1 : 0;
						while(getchar()!='\n');
					}
			}
		}
	}
	//Vuelvo a apuntar al comienzo de la empresa con el puntero:
	p = &empresa[0][0][0];
	//Recorro por zona:
	for(zona=0;zona<3;zona++){
		//Pongo tZona[zona] en cero:
		tZona[zona] = 0;
		printf("\n\nEn la zona %d se obtuvieron los siguientes resultados: \n",zona+1);
		//Recorro por sucursal:
		for(suc=0;suc<4;suc++){
			//Pongo tSuc[suc] en cero:
			tSuc[suc] = 0;
			//Recorro por vendedor y voy sumando al puntero:
			for(vend=0;vend<2;vend++,p++){
				tSuc[suc] = tSuc[suc]+*p;
				//Había asignado para que muestre por vendedor:
				//printf("Vendedor %d : $%.2lf\n",vend+1,empresa[zona][suc][vend]);
			}
			//Imprimo los resultados por sucursal:
			printf("La sucursal %d obtuvo: $%.2lf \n",suc+1,tSuc[suc]);
			tZona[zona] = tZona[zona] + tSuc[suc];
		}
		//Total de cada zona:
		printf("Total: $%.2lf",tZona[zona]);
		//Sumalizo el total general:
		total += tZona[zona];
	}
	//Imprimo el resultado final:
	printf("\n\n El total general es: $%.2lf",total);
	return 0;
}
