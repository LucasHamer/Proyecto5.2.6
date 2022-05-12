#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ventas=0;
    float imp,impn,desc,total=0,total1=0,total2=0,total3=0,total4=0,prom;

    printf("Ingrese el importe: ");
    scanf("%f",&imp);
    fflush(stdin);

    while(imp>0)
    {
        if(imp<50)
        {
            desc=imp*0.035;
            impn=imp;
            total1=imp-desc;
            ventas++;
            total+=total1;
            printf("El importe neto es %.2f, Su descuento sera de %.2f Y el total de %.2f\n",impn,desc,total1);
        }
        else if(imp>=50&&imp<=150)
        {
            desc=imp*0.1;
            impn=imp;
            total2=impn-desc;
            ventas++;
            total+=total2;
            printf("El importe neto es %.2f, Su descuento sera de %.2f Y el total de %.2f\n",impn,desc,total2);
        }
        else if(imp>=151&&imp<=300)
        {
            desc=imp*0.2;
            impn=imp;
            total3=impn-desc;
            ventas++;
            total+=total3;
            printf("El importe neto es %.2f, Su descuento sera de %.2f Y el total de %.2f\n",impn,desc,total3);
        }
        else
        {
            desc=imp*0.25;
            impn=imp;
            total4=impn-desc;
            ventas++;
            total+=total4;
            printf("El importe neto es %.2f, Su descuento sera de %.2f Y el total de %.2f\n",impn,desc,total4);
        }

        printf("Ingrese el importe: ");
        scanf("%f",&imp);
        fflush(stdin);

    }
            prom=total/ventas;
            printf("Promedio general de las ventas: %.2f",prom);

    return 0;
}
