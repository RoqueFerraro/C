#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[] ) {

// 1) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del 10,100,94,84,11.

// int vector[5]={10,100,94,84,11};

// int i;
// for ( i = 0; i <5; i++)
// {
//     printf("\n los valores del array son: %d", vector[i] );
// }


// 2) Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego muéstrelo de manera inversa.

// int vector[10];
// int i,mitad;

// // ya se la longitud (10) pero queria probar como era para averiguarla en c entonces hice esa cuenta 
// int longitud = sizeof(vector) / sizeof(vector[0]);

// for ( i = 0; i < longitud; i++)
// {
//     printf("\n Ingrese los valores del vector: ");
//     scanf("%d",& vector[i]); 
// }

// for (int i = 0; i < longitud / 2; i++) {
//     // asigno la mitad del vector a amitad 
//     mitad = vector[i];
//     // guardo y asigno la otra mitad del vector en vector 
//     vector[i] = vector[longitud - i - 1];
//     // guardo la mitad del vector que me quedaba por asignar
//     vector[longitud - i - 1] = mitad;
//   }

//   for (int i = 0; i < longitud; i++) {
//     printf("%d,", vector[i]);
//   }


// 3) Cree una matriz de enteros de 3 x 3. Inicialícela en base a la siguiente tabla:


// int vector[3][3];

// int i,j;

// for ( i = 0; i < 3; i++)
// {
//     for ( j = 0; j < 3; j++)
//     {
//         printf("\n Ingrese los datos del a varible 3x3 [%d],[%d]", i,j);
//         scanf("%d",& vector[i][j]);
//     }    
// }


// 4) Cree un array de char y escriba la palabra “Bienvenidos”. Responda la siguiente pregunta:
//     ¿De cuantas posiciones deberá ser el vector?


// char palabra[]= "bienvenidos";
// int i;


// for ( i = 0; i < 11; i++)
// {
//     printf("\n la palabra es: %c", palabra[i]);
// }


// 5) Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla. Responda:
//          ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos de repetición?
//          Implemente la misma solución con ciclos de repetición, y responda 
//          ¿Cuántas líneas de código necesito en esta segunda versión?

// int vector[10];
// int longitud = sizeof(vector) / sizeof(vector[0]);
// int sumaVector=0; 
// int i;

// for ( i = 0; i < longitud; i++)
// {
//     printf("\n Ingrese los valores del vector:");
//     scanf("%d",& vector[i]);

//     sumaVector += vector[i];
// }

// printf("la suma del vector es : %d", sumaVector);

// 6)   Desarrolle un programa que almacene en un vector el número de días que tiene cada mes 
//      (supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y 
//      muestre en pantalla el número de días que tiene ese mes.



    // int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // int mes;

    // printf("\n Ingrese el mes :");
    // scanf("%d",& mes );

    // if (mes>=1 && mes<=12)
    // {
    //     printf("\n El mes %d tiene %d dias ", mes,diasPorMes[mes-1]);
    // }
    

// 7) Desarrolle un programa que pida al usuario los datos de dos matrices de 2x2, y 
//  calcule y muestre su producto. Investigue como obtener el producto de dos matrices.


int matriz1[2][2];
int matriz2[2][2];
int producto[2][2];

int i,j;

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("\n Ingrese los datos de la matriz 1 de 2x2 [%d],[%d]", i,j);
        scanf("%d",& matriz1[i][j]);
    }    
}
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("\n Ingrese los datos de la matriz 2 de 2x2 [%d],[%d]", i,j);
        scanf("%d",& matriz2[i][j]);
    }    
}

producto[0][0] = matriz1[0][0]*matriz2[0][0] + matriz1[0][1]*matriz2[1][0];
producto[0][1] = matriz1[0][0]*matriz2[0][1] + matriz1[0][1]*matriz2[1][1];
producto[1][0] = matriz1[1][0]*matriz2[0][0] + matriz1[1][1]*matriz2[1][0];
producto[1][1] = matriz1[1][0]*matriz2[0][1] + matriz1[1][1]*matriz2[1][1];

printf("\n Los datos del producto de la matriz son:");

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("\n[%d][%d]", producto[i][j]);
        
    }    
}

return 0;
}

