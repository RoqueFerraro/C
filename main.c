
#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[] ) {

int numeros [10] ={1,2,3,4,5,6,7,8,9,10}; 
int longitud= sizeof(numeros)/sizeof(numeros[0]);


for ( int i = longitud - 1 ; i >= 0 ; i--)
{
    printf("%d", numeros[i]);
}




return 0;
}








                    