

// La empresa de mudanzas “NoRompoNada” quiere llevar una estadística básica, donde una vez al mes sedebe cargar un 
// resumen por cada camión que ha trabajado (máximo 50 camiones, aunque suelen ser menos):
// Se solicitará los datos de cada uno de los viajes para poder ir almacenando, totalizando y acumulando 
// la información para poder tener almacenado:

// a) Número de patente del camión (Alfanumérico)
// b) Cantidad de viajes en ese mes
// c) Distancia recorrida (en Km)
// d) Consumo de combustible consumido en el mes.

// Luego de cargar todos los datos de los camiones que trabajaron, obtener:

// a) El o los camiones camión que ha recorrido más kilómetros, mostrando el nombre del chofer.
// b) Promedio de combustible consumido de todos los camiones.
// c) El o los camiones que realizo menos viajes en el mes.



#include <stdio.h>
#include <string.h>


// DECLARACION DE FUNCIONES 

void ingresar_datos(char patentes[][7], int cantidad_viajes[], float distancia_recorrida[], float consumo_combustible[], int indice);

int kilometros_max(float distancia_recorrida[], int numeros_camiones);

int  viaje_min(int cantidad_viajes[], int numeros_camiones);

float promedio_combustible(float consumo_combustible[], int num_camiones);

void mostrar_resultados (char patentes[][7], int cantidad_viajes[], float distancia_recorrida[], float consumo_combustible[], int num_camiones, int viaje_min , int kilometros_max, float promedio_combustible);



// PROGRAMA

int main() {

    // DECLARACION DE VARIABLES Y ARRAYS 

    int num_camiones = 0;
    char patentes[50][7];
    int cantidad_viajes[50];
    float distancia_recorrida[50];
    float consumo_combustible[50];

    while(num_camiones <= 0 || num_camiones > 50){

        printf("\n Ingrese la cantidad de camiones que trabajaron este mes: ");
        scanf("%d",& num_camiones);

        if(num_camiones <= 0 || num_camiones > 50){

            printf("\n INGRESE UN VALOR VALADIO (maximo 50)\n");

        }   
    }

    // Declaro un ciclo un for para ingresar cada camion

    for (int i = 0; i < num_camiones; i++) {

            //Llamo a la fucion para ingresar los datos 

            ingresar_datos(patentes,cantidad_viajes,distancia_recorrida,consumo_combustible, i);
        }

    // Llamoa la funcion para mostrar los resultados

    mostrar_resultados(patentes, cantidad_viajes, distancia_recorrida, consumo_combustible, num_camiones, viaje_min(cantidad_viajes, num_camiones), kilometros_max(distancia_recorrida, num_camiones), promedio_combustible(consumo_combustible, num_camiones));

    return 0;
    
}


// FUNCIONES 

//Ingresar datos

void ingresar_datos(char patentes[][7], int cantidad_viajes[], float distancia_recorrida[], float consumo_combustible[], int indice) {
    printf("\nDATOS DEL CAMION %d: \n\n", indice + 1);

    // Validacion de patentes 

    do {
        printf("Ingrese la patente Argentina: ");
        if (scanf("%s", patentes[indice])!= 1 || strlen(patentes[indice]) < 6 || strlen(patentes[indice]) > 7) {
            printf("\nERROR VALOR EQUIVOCADO\n\n");
        }
    } while (strlen(patentes[indice]) < 6 || strlen(patentes[indice]) > 7);


    // Validacion de cantidad de viajes 

    do {
        printf("Ingrese la cantidad de viajes en el mes ( maximo 30 ): ");
        if (scanf("%d", &cantidad_viajes[indice]) != 1 || cantidad_viajes[indice] < 0 || cantidad_viajes[indice] >30) {
            printf("\nERROR VALOR EQUIVOCADO\n\n");
        }
    } while (cantidad_viajes[indice] < 0 || cantidad_viajes[indice] > 30);

    // validacion de cantidad de kilometros

    do {
        printf("Ingrese la distancia recorrida (en Km): ");
        if (scanf("%f", &distancia_recorrida[indice]) != 1 || distancia_recorrida[indice] < 0 ) {
            printf("\nERROR VALOR EQUIVOCADO\n\n");
        }
    } while (distancia_recorrida[indice] < 0 );

    // Validacion de combustible

    do {
        printf("Ingrese el consumo de combustible en el mes: ");
        if (    scanf("%f", &consumo_combustible[indice]) != 1 || consumo_combustible[indice] < 0 ) {
            printf("\nERROR VALOR EQUIVOCADO\n\n");
        }
    } while (consumo_combustible[indice] < 0 );
}


// Busquda de la distancia max

int kilometros_max( float distanciaRecorrida[], int num_camiones) {

    int camion_kilometros_max = 0;
    float kilometros_max = 0; 

    for (int i = 0; i < num_camiones; i++) {

        if (distanciaRecorrida[i] > kilometros_max) {

            kilometros_max = distanciaRecorrida[i];
            camion_kilometros_max = i;
        }
    }
    return camion_kilometros_max;
}

// Calculo del promedio

float promedio_combustible(float consumo_combustible[], int num_camiones){

    float total_combustible = 0;
    float combustible_promedio = 0;

    for (int i = 0; i < num_camiones; i++) {

        total_combustible += consumo_combustible[i];

    }

    combustible_promedio =  total_combustible / num_camiones;

    return combustible_promedio;

}

//Busqueda de la cantidad min de viajes de cada camion

int viaje_min(int cantidad_viajes[], int num_camiones){

    int min_viajes = -1;
    
    for (int i = 0; i < num_camiones; i++) {
        
        if (min_viajes == -1 || cantidad_viajes[i] < cantidad_viajes[min_viajes]) {

            min_viajes = i;

        }
    }
    
    return min_viajes;
}

//Mostar resultados

void mostrar_resultados (char patentes[][7], int cantidad_viajes[], float distancia_recorrida[], float consumo_combustible[], int num_camiones, int viaje_min , int kilometros_max, float promedio_combustible){


    //Resultados punto a)

    printf("\nEl o los camiones que han recorrido más kilómetros:\n\n");

    for (int i = 0; i < num_camiones; i++) {
        
        if (distancia_recorrida[i] == distancia_recorrida[kilometros_max]) {
            printf("   Número de patente: %s\n", patentes[i]);
            printf("   Cantidad de viajes: %d\n", cantidad_viajes[i]);
            printf("   Distancia recorrida: %.2f\n", distancia_recorrida[i]);
            printf("   Cosnumo de combustible: %.2f\n", consumo_combustible[i]);
            printf("\n");
        }
    }

    
    //Resultados punto b)

    printf(" \nEl promedio de combustible consumido de todos los camiones: %.2f\n", promedio_combustible);


    //Resultados punto c)
    printf("\nEl o los camiones que realizaron menos viajes en el mes:\n\n");

    for (int i = 0; i < num_camiones; i++) {

        if (cantidad_viajes[i] == cantidad_viajes[viaje_min]) {
            printf("   Número de patente: %s\n", patentes[i]);
            printf("   Cantidad de viajes: %d\n", cantidad_viajes[i]);
            printf("   Distancia recorrida: %.2f\n", distancia_recorrida[i]);
            printf("   Cosnumo de combustible: %.2f\n", consumo_combustible[i]);
            printf("\n\n");

        }
    }
}