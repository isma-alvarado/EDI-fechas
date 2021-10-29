
//PROGRAMA EN PROGRESO





#include <stdio.h>
#include <string.h>




#define DIA 1
#define MES 2
#define ANNIO 3

struct ESTRUCTURA_FECHA
{
    int dia;
    int mes;
    int annio;

};


typedef struct ESTRUCTURA_FECHA FECHAS;


int CapturaFecha(FECHAS *fecha);
FECHAS sumaFecha(FECHAS fecha,int tipo,int cantidadASumar);
FECHAS restaFecha(FECHAS fecha,int tipo,int cantidadARestar);
int compararFechas(FECHAS fecha1,FECHAS fecha2);
void imprimeFecha(FECHAS fecha);
int MenuOperaciones();
int MenuSumas();
int MenuRestas();



int main()
{
FECHAS fecha;
int fechaValida;





//sumaFecha(fecha,ANNIO,10);
//imprimeFecha(fecha);

fechaValida=CapturaFecha(&fecha);
if(fechaValida!=-1)
{
    printf("QUE OPCION DESEAS REALIZAR:");
    MenuOperaciones();


}




return 0;
}

int CapturaFecha(FECHAS *fecha)
{
       int VALIDA=-1;
        printf("\n FECHAS (DD/MM/AAAA): \n");


        printf("Dame el dia: \n ");
        scanf("%d",&fecha->dia);
        if(fecha->dia <=31)
            {
            printf("Dame el mes:  \n ");
            scanf("%d",&fecha->mes);

            if(fecha->mes <=12)
            {
            printf("Dame el Annio:  \n");
            scanf("%d",&fecha->annio);

            }
        else
            {
            printf("\n Digite un mes valido del 1 al 12\n");
            }


        printf("\n");

            VALIDA=1;
            }
        else
            {
            printf("\n Digite un dia valido del 1 al 31 \n");
            }


        if(fecha->dia<=31 && fecha->mes <=12)
            {
            printf("\t FECHA ACTUAL: %d/%d/%d  \n",fecha->dia,fecha->mes,fecha->annio);


            }



        else
        {
        printf("FECHA INVALIDA\n");

            VALIDA=-1;
        }
        printf("\n");


        return VALIDA;

}



FECHAS sumaFecha(FECHAS fecha,int tipo,int cantidadASumar)
{
    FECHAS nuevaFecha;

    if(tipo==ANNIO)   // Podriamos agregar validaciones para que no se pase del año 9999 y si se  pasa dejarlo en 9999
    {

        nuevaFecha.dia = fecha.dia;
        nuevaFecha.mes = fecha.mes;
        nuevaFecha.annio = fecha.annio + cantidadASumar;

    }


    else if(tipo==MES)
    {

        nuevaFecha.dia = fecha.dia;
        nuevaFecha.mes = fecha.mes + cantidadASumar;





        if(nuevaFecha.mes > 12)
        {
            //ajustar el mes
            //ajustar el año
            while(12);
        }


        nuevaFecha.annio = fecha.annio + cantidadASumar;
    }

    return nuevaFecha;
}



void imprimeFecha(FECHAS fecha)
{
    printf("\t NUEVA FECHA: %d/%d/%d",fecha.dia,fecha.mes,fecha.annio);
}




int MenuOperaciones()
{
    int respuesta;
    int opcion=-1;


    printf("\n1.SUMA \n");
    printf("2.RESTA \n");

    printf("\tQue opcion deseas realizar?: \n");
    scanf("%d",&respuesta);

    switch(respuesta){
    case 1:
            printf("\nELIGISTE SUMA:\n");
            opcion=1;

            MenuSumas();
            break;

    case 2:
            printf("\nELIGISTE RESTA: \n");
            opcion=1;
            MenuRestas();
            break;
    default:
            printf(" \nNo eligiste ninguna opcion  \n");
            opcion=-1;

}
return opcion;
}




int MenuSumas()
{
    int opcion=-1;
    int respuesta;
    int cantidadAsumar;
    printf("Que deseas sumar?: \n\n");
    printf("1.DIAS \n");
    printf("2.MESES \n");
    printf("3.ANNIOS \n \n");
    scanf("%d",&respuesta);

    switch(respuesta)
    {


    case 1:
            printf("Cuantos dias deseas sumar: \n");
            scanf("%d",&cantidadAsumar);

            break;

    case 2:
            printf("Cuntos meses deseas sumar: \n");
            scanf("%d",&cantidadAsumar);

            break;

    case 3:
            printf("Cuantos annios deseas sumar: \n");
            scanf("%d",&cantidadAsumar);

            break;

    default:
            printf("No elegiste ninguna opcion\n");

    }

}



int MenuRestas()
{
    int opcion=-1;
    int respuesta;
    int cantidadArestar;
    printf("Que deseas restar?: \n\n");
    printf("1.DIAS \n");
    printf("2.MESES \n");
    printf("3.ANNIOS \n  \n");
    scanf("%d",&respuesta);

    switch(respuesta)
    {


    case 1:
            printf("Cuantos dias deseas restar: \n");
            scanf("%d",&cantidadArestar);

            break;

    case 2:
            printf("Cuntos meses deseas restar: \n");
              scanf("%d",&cantidadArestar);

            break;

    case 3:
            printf("Cuantos annios deseas restar: \n");
              scanf("%d",&cantidadArestar);

            break;

    default:
            printf("No elegiste ninguna opcion\n");

    }

}
