#include <stdio.h>
#define pri 50

int main ()
{
    float kg, tot;

        printf("Peso de las manzanas: ");
        scanf("%f", &kg);

        if (kg >= 0 && kg <= 2) {
            tot=pri*kg;
            printf("%f", tot);
        }
        else
            if (kg >= 2.01 && kg <= 5) {
                tot=(pri*kg)-(((pri*kg)*10)/100);
                printf("El total es: %f (descuento del 10% )", tot);
            }
        else
            if (kg >= 5.01 && kg <= 10) {
                tot=(pri*kg)-(((pri*kg)*15)/100);
                printf("El total es: %f (descuento del 15% )", tot);
            }

        else
            if (kg >= 10) {
                tot=(pri*kg)-(((pri*kg)*20)/100);
                printf("El total es: %f (descuento del 20%)", tot);
            }
    return 0;
}