#include <stdio.h>

int main ()
{
    int hour, min;

        printf("Ingrese la hora (0-24): ");
        scanf("%d,", &hour);
        printf("Ingrese los minutos (0-59): ");
        scanf("%d,", &min);

        printf("La hora es: %d:%d\n",hour, min);
        if (hour >= 0 && hour<= 11 && min<=59)
            printf("Buenos dias");

        else if (hour >= 12 && hour <= 17 && min<=50)
            printf("Buenas tardes");

        else if  (hour >= 18 && hour <= 23 && min<=59)
            printf("Buenas noches");

        else
            printf("La hora no es valida");


    return 0;


}