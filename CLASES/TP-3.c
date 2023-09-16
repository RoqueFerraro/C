
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]
) {


// EJERCICIO 1: Ingresar 25 números, calcular su promedio e imprimirlo

// int num1;
// int num2 = 0;
// int i = 1;


// for ( i = 1; i <= 2; i++)
// {
//     printf("\n Ingrese un numero:  ");
//     scanf("%d",& num1);

//     num2 += num1;

//     num2 /= i;

// }

//  printf("\n el promedio de los numeros ingresados es: %d", num2);


//EJERCICIO 2 :Ingresar10 valores, indicar e imprimir cuántos son positivos, cuántos negativos ycuántos ceros


// int num;
// int i=0;
// int positivos = 0;
// int nengativos = 0;
// int ceros = 0;

// for ( i = 0; i <= 9 ; i++)
// {
//     printf("\n Ingrese un numero:  ");
//     scanf("%d",& num);

//         if (num>0)
//     {
//         positivos++ ;
//     }
//     else if (num == 0 )
//     {
//         ceros ++;
//     }
//     else{
//         nengativos ++;
//     }

// }

// printf("\n hay %d numeros postivos", positivos);
// printf("\n hay %d numeros negativos", nengativos);
// printf("\n hay %d numero igual a cero", ceros);


// EJERCICO 3 : Ingresar8 valores por teclado, y a partir de esto sacar el promedio general, 
//              sacar el promedio de lo valores pares y el promedio de los valores impares. 
//              Luegomostrar por pantalla cuantos números superaron el valor 15.


// int num;
// int i = 0;
// int mayorQueQuince = 0;
// int numeroPar = 0;
// int pares = 0;
// int impares = 0;
// float promedioGeneral = 0;
// float promedioPares = 0;
// float promedioImpares = 0;

// for ( i = 1; i <= 3 ; i++)
// {
//     printf("\n ingrese un numero: ");
//     scanf("%d",& num);

//     promedioGeneral += num;
//     promedioGeneral /= i;

//     numeroPar = num;
//     numeroPar %= 2; 

//     if (numeroPar == 0 )
//     {
//         pares ++;
//         promedioPares+= num;
//         promedioPares /= pares;

//     }
//     else if (numeroPar!= 0)
//     {
//         impares ++ ;
//         promedioImpares+= num;
//         promedioImpares/= impares;

//     }

//     if(num >15){
//         mayorQueQuince++;
//     }
// }

// printf("\n el promedio general es : %f", promedioGeneral);
// printf("\n el promedio de los numeros pares es : %f", promedioPares);
// printf("\n el promedio de los numeros impares es : %f", promedioImpares);
// printf("\n los numeros mayores que 15 son : %d ", mayorQueQuince);



// EJERCICIO 4 : Ingresar30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, 
//               cuantosentre 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cadagrupo en el total.


// int num ;
// float i = 0;
// int contadorEntre0y10 = 0;
// int contadorEntre10y20 = 0;
// int contadorEntre20y30 = 0 ;
// float porcentaje1 ;
// float porcentaje3 ;
// float porcentaje2 ;
// float a;


// for ( i = 1; i <= 30; i++)
// {
//     printf("\n Ingrese un numero:");
//     scanf("%d", & num);

//     if (num>=0 && num<=10)
//     {
//         contadorEntre0y10++ ;
//     }
//     else if (num>10 && num<=20)
//     {
//         contadorEntre10y20++ ;
//     }
//     else if (num>20 && num<=30)
//     {
//         contadorEntre20y30++ ;
//     }

//     porcentaje1 = contadorEntre0y10 * (i / 100);
//     porcentaje2 = contadorEntre10y20 * (i / 100);
//     porcentaje3 = contadorEntre20y30 * (i / 100);

        
// }


// printf("\n Los numeros entre 0 y 10 son el:  %f ", porcentaje1);
// printf("\n Los numeros entre 10 y 20 son el:  %f ", porcentaje2);
// printf("\n Los numeros entre 20 y 30 son el:  %f ", porcentaje3);

// EJERCICIO 5 :Ingresarla patente y monto de la multa de 50 autos, indicar e imprimir cuántos 
//              montos superan los $ 40 y del total cobrado que porcentaje representa la suma de losque 
//              superan los $40


// int patente;
// int montoMulta=0;
// int totalMontoMulta=0;
// int i = 0;
// int mayor40=0;
// int totalCobrado = 0;
// float porcentajeTotalCobrado = 0;

// for ( i = 1; i <= 50 ; i++)
// {
//     printf("\n Ingrese una patente:");
//     scanf("%d", & patente);

//     printf("\n Ingrese el monto de la multa:");
//     scanf("%d", & montoMulta);  

//     if (montoMulta > 40 )
//     {
//         mayor40 ++;
//         totalMontoMulta += montoMulta ;        
//     }

//     totalCobrado += montoMulta;
//     porcentajeTotalCobrado = totalMontoMulta * ( totalCobrado / 100);

// }

// printf("\n los autos que superan el monto son : %d", mayor40);
// printf("\n el porcentaje del total cobrado es %f:", porcentajeTotalCobrado);


                                            //HACER DIAGRAMAS DE FLUJO


return 0;
}