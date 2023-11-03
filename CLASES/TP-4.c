
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]
) {
 
// EJERCICIO 1 : Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

// int sueldos = 0 ;
// int sumaSueldo = 0;
// float sumardorSueldos = 0;
// float proemdioSueldos = 0 ;

// printf("\n Ingrese un sueldo o insgrese ( 0 ) para salir ");
// scanf("%d ", & sueldos);

// while (sueldos != 0 )
// {
//     sumardorSueldos ++ ;
//     sumaSueldo += sueldos;

//     proemdioSueldos = sumaSueldo / sumardorSueldos ; 


//     printf("\n Ingrese un sueldo o insgrese ESC para salir ");
//     scanf("%d ", & sueldos);

// }

// printf("\n la suma de los sueldos es : %d ", sumaSueldo);
// printf("\n El promedio de los sueldos es  : %f ", proemdioSueldos);


// EJERCICIO 2 :Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y 
//              cuantas superan los $1000. Imprimir los resultados

// int facturas = 0 ; 
// int sumadorFacturas = 0; 
// int totalFacturas = 0;


// printf("\n Ingrese un monto de factura o insgrese ( 0 ) para salir ");
// scanf("%d ", & facturas);

// while (facturas != 0)
// {
//     totalFacturas += facturas;

//     if (facturas > 1000)
//     {
//         sumadorFacturas ++ ;
//     }
    

//     printf("\n Ingrese un monto de factura o insgrese ( 0 ) para salir ");
//     scanf("%d ", & facturas);
// }


// printf("\n El total de las facutas es : %d" , totalFacturas);
// printf("\n La cantidad de factura mayroa 1000 es: %d",sumadorFacturas);


// EJERCICIO 3 :Sobre elejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive.
//              imprimir el resultado


// ES LO MISMO QUE EL ANTERIOR PERO CON UN CICLO IF PARA VALIDAR ESA OPERACION DE BUSQUEDA ENTRE 400 Y 700


// EJERCICIO 4 :Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y c
//              antidad de ceros


// int num = 0 ;
// int positivos = 0;
// int sumaPositivos = 0;
// int negativos = 0;
// int sumaNegativos = 0;
// int ceros = 0;
// float promedioPositivos = 0;
// float promedioNegativos = 0;


// printf("\n Ingrese un numero  o insgrese ( 0 ) para salir ");
// scanf("%d ", & num);
 
// while (num != 0)
// {
//     if(num > 0){
//         positivos ++;
//         sumaPositivos += num;
//         promedioPositivos = sumaPositivos / positivos;

//     }
//     else if (num == 0){
//         ceros ++;
//     }
//     else{
//         negativos ++ ;
//         sumaNegativos += num;
//         promedioNegativos = sumaNegativos / negativos;

//     }

// printf("\n Ingrese un numero  o insgrese ( 0 ) para salir ");
// scanf("%d ", & num);
// }

// printf("\n El promedio de los numeor positivos es : %f", promedioPositivos );
// printf("\n El promedio de los numeor negativos es : %f", promedioNegativos );
// printf("\n La cantidad de ceros es : %d", ceros );


// EJERCICIO 5 :Ingresarlos datos de facturación de una empresa. Se conoce Número de factura, 
//              Número de artículo, Cantidad vendida y Precio unitario Los datos finalizan con 
//              numero de factura = 0, cada factura sólo tiene un número de artículo, y 
//              existen sólo tres artículos.


// int numeroDeFactura = 0;
// int numeroDeArticulo = 0;
// int cantidadVendida = 0;
// int precioUnitarioa = 0;

// printf("\n Ingrese un numero de factura  o insgrese ( 0 ) para salir ");
// scanf("%d ", & numeroDeFactura);

// while (numeroDeFactura != 0)
// {
//     printf("\n Ingrese un numero de articulo ( 1 2 3) o insgrese ( 0 ) para salir ");
//     scanf("%d ", & numeroDeArticulo);

//     switch ( numeroDeArticulo )
//     {
//     case 1:
//         printf("\n Ingrese la cantidad vendida  ");
//         scanf("%d ", & cantidadVendida);

//         printf("\n Ingrese el precio unitario ");
//         scanf("%d ", & precioUnitarioa);

//         break;
    
//     case 2:
//         printf("\n Ingrese la cantidad vendida  ");
//         scanf("%d ", & cantidadVendida);

//         printf("\n Ingrese el precio unitario ");
//         scanf("%d ", & precioUnitarioa);
        
//         break;

//     case 3:
//         printf("\n Ingrese la cantidad vendida  ");
//         scanf("%d ", & cantidadVendida);

//         printf("\n Ingrese el precio unitario ");
//         scanf("%d ", & precioUnitarioa);
        
//         break;

//     default:

//         printf("\n Ingrese un numero de articulo ( 1 2 3) o insgrese ( 0 ) para salir ");
//         scanf("%d ", & numeroDeArticulo);
//         break;
//     }
    
//     printf("\n Ingrese un numero de factura  o insgrese ( 0 ) para salir ");
//     scanf("%d ", & numeroDeFactura);
    
// }

// printf("\n la factura  %d tiene de numero de articulo %d y se vendieron %d a %d cada uno", numeroDeFactura ,  numeroDeArticulo , cantidadVendida , precioUnitarioa);


// EJERCICIO 6 :Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor

// int temperatura = 0;
// int temperaturaMax = 0;
// int temperaturaMin = 0;

// printf("\n Ingrese una temperatura menor a 1000 o ( 0 ) para salir ");
// scanf("%d ", & temperatura);

//  while (temperatura !=0){
//     if (temperatura<=1000){
//         if (temperatura >= temperaturaMax)
//         {
//             temperaturaMax = temperatura ;
//         }
//         else if (temperatura <= temperaturaMin)
//         {
//             temperaturaMin = temperatura;
//         }
//     }
//     printf("\n Ingrese una temperatura menor a 1000 o ( 0 ) para salir ");
//     scanf("%d ",& temperatura);
// }

// printf("\n la temperatura maxima es : %d ", temperaturaMax);
// printf("\n la temperatura minima es : %d ", temperaturaMin);


// EJERCICIO 7: En una carrera de autos se ingresan el número de auto y su tiempo, indicar e 
//              imprimir cuál ganó y cúal fue el último


// int numeroDeAuto = 0;
// int tiempo = 0 ;
// int primerPuesto = 0;
// int ultimoPuesto = 0;
// int autoGanador = 0;
// int autoPerdedor = 0;


// printf("\n Ingrese un numero de auto o ( 0 ) para salir ");
// scanf("%d ", & numeroDeAuto);

// while (numeroDeAuto != 0){

//     printf("\n Ingrese el tiempo del auto ");
//     scanf("%d ", & tiempo); 

//     if (tiempo > 0 )
//     {
//         if (tiempo >= primerPuesto)
//         {
//             primerPuesto = tiempo;
//             autoGanador = numeroDeAuto;
//         }
//         else if (tiempo <= ultimoPuesto)
//         {
//             ultimoPuesto = tiempo;
//             autoPerdedor= numeroDeAuto;
//         }
   
//     }
    
//     printf("\n Ingrese un numero de auto o ( 0 ) para salir ");
//     scanf("%d ", & numeroDeAuto);
     
// }

// printf("\n El auto ganador es el numero: %d con un tiempo de %d ", autoGanador , primerPuesto);
// printf("\n El auto que quedo en el ultimo puesto es el numero: %d con un tiempo de %d ", autoPerdedor  ,ultimoPuesto);







return 0;
}

