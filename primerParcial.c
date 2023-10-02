#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] ) {

int CostoPorHoraDeLunesAViernes = 500;
int CostoPorHoraFinDeSemana =  CostoPorHoraDeLunesAViernes + CostoPorHoraDeLunesAViernes * 0.3 ;
int selectorDeDia = 0;
int contadorClientes = 1 ;
int precioCliente = 0;
int horasDeUso = 0;
int totalHorasContratadas = 0;
int cantidadMaxDeHoras = 0;
int cantidadTotalClientes = 0;
int totalRecaudado = 0 ;
int cerrarPrograma = 0 ;



printf("\n Ingrese si va a operar en dia de semana (1) , en fin de semana (2) o (0) para terminar el programa :  ");
scanf("%d", & selectorDeDia);

while (selectorDeDia != 0)
{
    if ( selectorDeDia == 1 || selectorDeDia == 2){
        switch (selectorDeDia){
            case 1 :
                printf("\n ESTA EN DIAS DE SEMANA");
                printf("\n\n Ingrese las horas del %dº cliente: ", contadorClientes  );
                scanf("%d", & horasDeUso);
                                    
                while (horasDeUso != 0)
                {
                    if (horasDeUso > 0 && horasDeUso <= 24)
                    {
                        contadorClientes ++ ;
                        totalHorasContratadas += horasDeUso;
                        totalRecaudado = totalHorasContratadas * CostoPorHoraDeLunesAViernes;

                        precioCliente = horasDeUso * CostoPorHoraDeLunesAViernes ;



                        if(horasDeUso >= cantidadMaxDeHoras){
                            cantidadMaxDeHoras = horasDeUso;
                        }

                        printf("\n\n El monto que debe pagar el %dº cliente es de : %d", contadorClientes , precioCliente);

                    }
            

                    printf("\n\n Ingrese las horas del %dº cliente o (0) para terminar le programa: " , contadorClientes);
                    scanf("%d" ,& horasDeUso);
                }
                
                printf("\n La cantidad de horas contratadas en el dia es : %d" , totalHorasContratadas);
                printf("\n La cantidad maxima de horas contratadas en el dia es : %d" , cantidadMaxDeHoras);
                printf("\n La cantidad total de clientes es de : %d" , contadorClientes);
                printf("\n El total de lo reacaudado en el dia es de: %d" , totalRecaudado);

                return 0 ;
            
            
            case 2 :
                printf("\n ESTA EN FIN DE SEMANA");
                printf("\n\n Ingrese las horas trabajadas del %dº cliente: ", contadorClientes  );
                scanf("%d", & horasDeUso);
                                    
                while (horasDeUso != 0)
                {
                    if (horasDeUso > 0 && horasDeUso <= 24)
                    {
                        contadorClientes ++ ;
                        totalHorasContratadas += horasDeUso;
                        totalRecaudado = totalHorasContratadas * CostoPorHoraFinDeSemana;

                        precioCliente = horasDeUso * CostoPorHoraFinDeSemana ;



                        if(horasDeUso >= cantidadMaxDeHoras){
                            cantidadMaxDeHoras = horasDeUso;
                        }

                        printf("\n\n El monto que debe pagar el %dº es de : %d", contadorClientes , precioCliente);

                    }
            

                    printf("\n\n Ingrese las horas trabajadas del %dº cliente o (0): " , contadorClientes);
                    scanf("%d" ,& horasDeUso);
                }
                
                printf("\n La cantidad de horas contratadas en el dia es : %d" , totalHorasContratadas);
                printf("\n La cantidad maxima de horas contratadas en el dia es : %d" , cantidadMaxDeHoras);
                printf("\n La cantidad total de clientes es de : %d" , contadorClientes);
                printf("\n El total de lo reacaudado en el dia es de: %d" , totalRecaudado);

                return 0 ;       
        }
    }


         printf("\n Ingrese si va a operar en dia de semana (1) , en fin de semana (2) o (0) para terminar el programa :  ");
         scanf("%d", & selectorDeDia);

}


return 0;




}