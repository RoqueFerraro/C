#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main(int argc, char *argv[]) {
	
// VARIABLES EJ 1 A 2

//int valor1=0;
//int valor2=0;




// EJERCICIO 1

/*printf("\ningrese un valor: ");
scanf("%d",& valor1);

printf("\ningrese un segundo valor:");
scanf("%d",& valor2);

if( valor1!=valor2 ){
	printf("\n los valores son diferentes");

	
}
else{
	printf("\n los valores son iguales");

}*/

//EJECICIO 2

/*printf("\n ingrese un valor: ");
scanf("%d",& valor1);

if( valor1>0 ){
		printf("\n El numero es positivo ");

}else{
	printf("\n El numero es negativo");
}
if(valor1==0){
						printf("\n El numero es cero ");
			}*/

//EJERCICIO 3
/*
int lado1;
int lado2;
int lado3;

printf("\n ingrese un lado: ");
scanf("%d",& lado1);

printf("\n ingrese un segundo lado: ");
scanf("%d",& lado2);

printf("\n ingrese un tercer lado: ");
scanf("%d",& lado3);

if(lado1==lado2 && lado1==lado3){
	printf("\n El triangulo es equilatero: ");
}

else if(lado1==lado2 || lado2==lado3 || lado1==lado3){
			printf("\n El triangulo es isoceles: ");
			
	}
else{
				printf("\n El triangulo es escaleno: ");

}*/



//VARIABLES EJERCICIO 4 Y 5 

/*int valor1;
int valor2;
int valor3;
int valor4;
int suma;
int promedio;
int suma2;*/

//EJERCICIO 4

/*printf("\n ingrese un primer valor: ");
scanf("%d",& valor1);

printf("\n ingrese un segundo valor: ");
scanf("%d",& valor2);+

printf("\n ingrese un tercer valor: ");
scanf("%d",& valor3);


suma = valor1 + valor2 + valor3;

promedio = suma/3;

printf("\nla suma de los valores es: %d", suma);

printf("\n el promedio de los valores es: %d", promedio);

if(valor1>promedio){
	printf("\n el valor 1 es mayor que el promedio");


}
else if(valor2> promedio){
	printf("\n el valor 2 es mayor que el promedio");

}
else{
	printf("\n el valor 3 es mayor que el promedio");

}*/


//EJERCICIO 5

/*printf("\n ingrese un primer valor: ");
scanf("%d",& valor1);

printf("\n ingrese un segundo valor: ");
scanf("%d",& valor2);+

printf("\n ingrese un tercer valor: ");
scanf("%d",& valor3);

printf("\n ingrese un cuarto valor: ");
scanf("%d",& valor4);


suma = valor1 + valor2;

suma2= valor3 +valor4;

printf("\nla suma de los valores 1 y 2 es: %d", suma);

printf("\nla suma de los valores 3 y 4 es: %d", suma2);

if(suma>suma2){
	printf("\nla suma de los valores 1 y 2 es mayor ");

}
else{
	printf("\nla suma de los valores 3 y 4 es mayor ");

}*/


//EJERCICO 6

/*int edad;
int estatura;
int edad1;
int estatura1;

printf("\n ingrese la edad de la primer persona : ");
scanf("%d",& edad);

printf("\n ingrese la estatura de la primer persona : ");
scanf("%d",& estatura);

printf("\n ingrese la edad de la segunda persona : ");
scanf("%d",& edad1);

printf("\n ingrese la estatura de la segunda persona : ");
scanf("%d",& estatura1);

if(edad>edad1){
	printf("\n la estatura de la primer persona es : %d", estatura);

}
else{
		printf("\n la estatura de la segunda persona es : %d", estatura1);

}*/


//EJERCICIO 7

/*int valorHora;
int tiempoTrabajado;
int sueldo;

int PREMIO50hs = 100;
int PREMIO150hs = 200;

printf("\n ingrese el valor de la hora : ");
scanf("%d",& valorHora);

printf("\n ingrese el tiempo trabajado : ");
scanf("%d",& tiempoTrabajado);

if(tiempoTrabajado > 50 && tiempoTrabajado < 150){
	sueldo =  valorHora * tiempoTrabajado + PREMIO50hs;
	printf("\n El sueldo es de : %d", sueldo);	
}
else if( tiempoTrabajado > 150){
	sueldo =  valorHora * tiempoTrabajado + PREMIO150hs;
	printf("\n El sueldo es de : %d", sueldo);
}
else{
	sueldo =  valorHora * tiempoTrabajado ;
	printf("\n El sueldo es de : %d", sueldo);
}*/


//EJERCICIO 8

/*int dia=1;
int mes=1;
int year=0; 
int anioBisiesto;

printf("\n ingrese un anio : ");
scanf("%d",& year);

printf("\n ingrese un mes : ");
scanf("%d",& mes);

printf("\n ingrese un dia : ");
scanf("%d",& dia);

anioBisiesto = year/4;
anioBisiesto %= 1;


if(anioBisiesto == 0){
	if(year>0){
		if(mes>=1 && mes<=12){
			if(dia>=1 && dia<=31){
				printf("\n La fecha ingresado es : %d / %d / %d y es un a�o bisiesto",dia , mes , year);
				return 0;			}
		}
			
	}
	
	else{
		printf("\n La fecha ingresada es antes de cristo");
	}
}

else{
	if(year>0){
		if(mes>=1 && mes<=12){
			if(mes==2){
				if(dia == 29){
					printf("\n La fecha ingresado es : %d / %d / %d  ",dia , mes , year);
					return 0;
				}
			}
			
			if(dia>=1 && dia<=31){
				printf("\n La fecha ingresado es : %d / %d / %d ",dia , mes , year);
				return 0;			}
		}
			
	}
	
	else{
		printf("\n La fecha ingresada es antes de cristo");
	}
	
}*/


//EJERCICIO 9 , 10 y 11

/*int sueldoFinal=0;
int sueldo=0;
int categoria=0;
int antiguedad=0;
int ADICIONAL = 50;

printf("\n ingrese el sueldo del empleado:");
scanf("%d",& sueldo);
		
printf("\n ingrese la categoria  del empleado:");
scanf("%d",& categoria);

printf("\n ingrese la antiguedad del empleado:");
scanf("%d",& antiguedad);
	
if(categoria == 1 ){
	/*if(antiguedad > 5){
		sueldoFinal = sueldo + antiguedad * ADICIONAL;
	    printf("\n el sueldo final es de : %d", sueldoFinal);
	}
	else{
		sueldoFinal = sueldo + antiguedad * ADICIONAL;
		printf("\n el sueldo final es de : %d", sueldoFinal);
	}*/
	
	/*sueldoFinal = sueldo + antiguedad * 50;
	printf("\n el sueldo final es de : %d", sueldoFinal);
}
else if(categoria == 2){
	sueldoFinal = sueldo + antiguedad * 70;  
	printf("\n el sueldo final es de : %d", sueldoFinal);
}
else if(categoria == 3){
	sueldoFinal = sueldo + antiguedad * 80;  
	printf("\n el sueldo final es de : %d", sueldoFinal);
}*/







//poner una letra y si es mayor a m decilo y no decirlo tambien

// es mayuscula o minusucla
// es m o M 


/*char letra ;

print("\n indique una letra");
scanf("%c",  &letra);

if(letra > m ){
	print("\n es mayor");
}
else{
	print("\n es menor");

}*/



int num = 10;
float porcentaje ;

porcentaje = num * 0.01;

printf(" %f", porcentaje );
















	return 0;
}











	
	
	
	
	
	
	

