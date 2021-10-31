
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
int imprimeFecha(FECHAS fecha);
int imprimeFecha2(FECHAS fechaNUEVA);

void MenuSumas(int *ASumar,int *tipo);
void MenuRestas(int dato,int *ARestar,int *tipo);



int main()
{
FECHAS fecha;
FECHAS NuevaFecha;

int fechaValida;
int suma,resta,tipo,dato;
int respuesta;


fechaValida=CapturaFecha(&fecha);
if(fechaValida!=-1)
{
    printf("QUE OPCION DESEAS REALIZAR:");


    printf("\n1.SUMA \n");
    printf("2.RESTA \n");

    printf("\tQue opcion deseas realizar?: \n");
    scanf("%d",&respuesta);

    switch(respuesta){
    case 1:
            printf("\nELIGISTE SUMA:\n");

            MenuSumas(&suma,&tipo);

             NuevaFecha=sumaFecha(fecha,tipo,suma);




            break;

    case 2:
            printf("\nELIGISTE RESTA: \n");

            MenuRestas(&tipo,&resta,tipo);
            NuevaFecha=restaFecha(fecha,tipo,resta);
            break;
    default:
            printf(" \nNo eligiste ninguna opcion  \n");


}





imprimeFecha(fecha);
printf("\n");
imprimeFecha2(NuevaFecha);

}

return 0;
}








int CapturaFecha(FECHAS *fecha)
{
       int VALIDA=-1;
        printf("\n FECHAS (DIA/MES/ANNIO): \n");


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


	if(tipo==ANNIO)
	{
		nuevaFecha.dia=fecha.dia;
		nuevaFecha.mes=fecha.mes;
		nuevaFecha.annio=fecha.annio+cantidadASumar;

	}

	return nuevaFecha;
}


FECHAS restaFecha(FECHAS fecha,int tipo,int cantidadARestar)
{
    FECHAS nuevaFecha;


	if(tipo==ANNIO)
	{
		nuevaFecha.dia=fecha.dia;
		nuevaFecha.mes=fecha.mes;
		nuevaFecha.annio=fecha.annio-cantidadARestar;

	}

	return nuevaFecha;
}





int imprimeFecha(FECHAS fecha)
{
    printf("\t FECHA actual: %d/%d/%d \n",fecha.dia,fecha.mes,fecha.annio);
}



int imprimeFecha2(FECHAS NUEVA)
{
    printf("\t NUEVA FECHA: %d/%d/%d",NUEVA.dia,NUEVA.mes,NUEVA.annio);
}





void MenuSumas(int *ASumar,int *tipo)
{
    int dato;


    printf("Que deseas sumar?: \n\n");
    printf("1.DIAS \n");
    printf("2.MESES \n");
    printf("3.ANNIOS \n \n");
    scanf("%d",&dato);

    if(dato==1)
    {


            printf("Cuantos dias deseas sumar: \n");
            scanf("%d",&ASumar);
    *tipo=DIA;
    }



    else if(dato==2)
    {
            printf("Cuntos meses deseas sumar: \n");
            scanf("%d",&ASumar);
        *tipo=MES;

    }

     else if(dato==3)
    {
            printf("Cuantos annios deseas sumar: \n");
            scanf("%d",&ASumar);
    *tipo=ANNIO;
    }

     else
        printf("No elegiste ninguna opcion");

    printf("\n%d a sumar\n",ASumar);

    *ASumar;
    *tipo;


}






void MenuRestas(int dato,int *ARestar,int *tipo)

{
    int opcion=-1;

    printf("Que deseas restar?: \n\n");
    printf("1.DIAS \n");
    printf("2.MESES \n");
    printf("3.ANNIOS \n  \n");
    scanf("%d",&dato);



    if(dato==1)
    {

            printf("Cuantos dias deseas restar: \n");
            scanf("%d",&ARestar);
             *tipo=DIA;
     }

    else if(dato==2)
    {
            printf("Cuntos meses deseas restar: \n");
              scanf("%d",&ARestar);
               *tipo=MES;
     }



    else if(dato==3)
    {

            printf("Cuantos annios deseas restar: \n");
              scanf("%d",&ARestar);

             *tipo=ANNIO;
    }
    else
        printf("no elegiste ninguna");
      printf("%d a restar\n",ARestar);

      *tipo;
      *ARestar;

}
