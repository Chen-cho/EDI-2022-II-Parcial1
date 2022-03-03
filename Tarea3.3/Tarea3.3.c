#include <stdio.h>
#define DIA 86400
#define HORA 3600
#define MINUTO 60

int main ()
{
    int total, day, hour, min;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d,", &total);

    day = total  / DIA;
    total = total  % DIA;

    hour = total  / HORA;
    total = total  % HORA;

    min = total / MINUTO;
    total = total % MINUTO;

    printf("Dias: %d\n", day);
    printf("Horas: %d\n", hour);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", total);

    return 0;
}

