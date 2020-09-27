#include <stdio.h>
#include <stdlib.h>
int main() {
	int zona,sucursal,vendedor;
	//double tZona;
	double ventas[3][4][2];
	//ingreso de ventas
	for(zona=0;zona<3;zona++){
		for(sucursal=0;sucursal<4;sucursal++){
			for(vendedor=0;vendedor<2;vendedor++){
				printf("Ingrese T.Venta Zona %d Sucur %d Vend %d: \n", zona+ 1,sucursal+1,vendedor+100);
				scanf("%lf",&ventas[zona][sucursal][vendedor]);
			}
		}
	}
	
	// Mostrar las ventas
	for(zona=0;zona<3;zona++){
		for(sucursal=0;sucursal<4;sucursal++){
			for(vendedor=0;vendedor<2;vendedor++){
				printf("T.Venta Zona %d Sucur %d Vend %d:\n",zona+1,sucursal+1,vendedor+100);
			}
		}
	}
	return 0;
}

