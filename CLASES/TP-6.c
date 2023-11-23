
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[] ) {



// 1) Ingresar datos y cargar un vector de 50 elementos, calcular

// La suma de todos los elementos.
// El producto de todos los elementos.
// Mostrar del vector el elemento 50 al 1.
// Imprimir las componentes de indice par.
// Imprimir las componentes de indice impar.

// int vector[50];
// int suma = 0;
// int producto = 1;

// for (int i = 0; i < 50; i++) {
//     printf("Ingrese el elemento %d: ", i+1);
//     scanf("%d", &vector[i]);
//     suma += vector[i];
//     producto *= vector[i];
// }

// printf("La suma de todos los elementos es: %d\n", suma);
// printf("El producto de todos los elementos es: %d\n", producto);

// printf("Elementos del vector del 50 al 1:\n");
// for (int i = 49; i >= 0; i--) {
//     printf("%d ", vector[i]);
// }
// printf("\n");

// printf("Componentes de indice par:\n");
// for (int i = 0; i < 50; i += 2) {
//     printf("%d ", vector[i]);
// }
// printf("\n");

// printf("Componentes de indice impar:\n");
// for (int i = 1; i < 50; i += 2) {
//     printf("%d ", vector[i]);
// }


// 2) Ingresar 10 sueldos y edades de una empresa y calcular

// Sueldo promedio
// Sueldo promedio de los empleadosque tienen entre 23 y 40 años
// Edad promedio
// Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
// Cantidad de empleados con edades menor a la edad promedio


// int sueldos[2];
// int longitud = sizeof(sueldos) / sizeof(sueldos[0]);
// int edades[longitud];
// int i=0;
// int promedio23y40Años=0;
// int promedioSueldos=0;
// int edadPromedio =0 ;
// int empleadosPrecarizados =0;
// int empleadosJovenes=0;

// //inicializo cada vector
// for ( i = 0; i < longitud; i++)
// {
//   printf("\n ingrese el %d sueldo: ", i);
//   scanf("%d",&sueldos[i]);

//   printf("\n ingrese la edad del %d cliente: ", i);
//   scanf("%d",&edades[i]);

// }


// // Calculamos el suelod promedio.

// for ( i = 0; i < longitud; i++)
// {
//   promedioSueldos += sueldos[i]; 
// }
// promedioSueldos = promedioSueldos/longitud;

// printf("\n el promedio general de los sueldos es: %d  ", promedioSueldos);

// // sueldo promedio de 23 a 40 anos 

// for ( i = 0; i < longitud; i++)
// {
//   if(edades[i]>=23 && edades[i]<=40){

//     promedio23y40Años+=sueldos[i];
//   }
// }
// promedio23y40Años = promedio23y40Años/longitud;

// printf("\n el promedio general de los sueldos entre 23 y 40 es: %d  ", promedio23y40Años);

// // Calculamos la edad promedio.

// for ( i = 0; i < longitud; i++)
// {
//   edadPromedio += edades[i]; 
// }
// edadPromedio = edadPromedio/longitud;

// printf("\n la edad promedio es : %d  ", edadPromedio);

// // Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.

// for ( i = 0; i < longitud; i++)
// {
//   if (edades[i]>30 && sueldos[i]<1000)
//   {
//     empleadosPrecarizados++;
//   }
  
// }
// printf("\n los empleados precarizado son : %d  ", empleadosPrecarizados);

// // Cantidad de empleados con edades menor a la edad promedio


// for ( i = 0; i < longitud; i++)
// {
//   if (edades[i]<edadPromedio)
//   {
//     empleadosJovenes++;
//   }
  
// }
// printf("\n los empleados jovenes son : %d", empleadosJovenes);










// 4) Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotan los siguientes datos, 
//  que terminan con número de factura = 0

// Número defactura
// Número demozo
// Número demesa
// Cantidadde personas que comieron
// Monto dela cuenta
//    Se desea saber lo siguiente

// Cantidad de personas atendidas por cada mozo
// Cantidad de facturas realizadas
// Caja diaria realizada
// Monto facturado por cada mesa en total
// Porcentual facturado por cada mozo sobre el total
// Si a cada mozo se le da el 5% de su venta cuánto le corresponde a cada uno
// Cuál mozo atendió más personas en total
// Cuántas facturas superaron $ 45
//  Mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo

return 0;
}