/*
 ============================================================================
 Name        : pedirNumEnteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "PedirNumero.h"


int main()
{
	setbuf(stdout, NULL);
    float kilometros;
    float precioLatam;
    float precioAerolineas;

    kilometros = PedirEnteroPositivo("Ingrese los kilometros: ","Error ingreso cero o un numero no positivo, reingrese los kilometros: ");
    precioLatam = PedirEnteroPositivo("Ingrese precioLatam: ","Error ingreso cero o un numero no positivo, reingrese los precios de Latam: ");
    precioAerolineas = PedirEnteroPositivo("Ingrese los precioAerolineas: ","Error ingreso cero o un numero no positivo, reingrese los precios de Aerolineas: ");

    printf("Kilometros %d\n",kilometros);
    printf("Precio Latam %d\n",precioLatam);
    printf("Precio Aerolineas %d\n",precioAerolineas);




    return 0;
}


