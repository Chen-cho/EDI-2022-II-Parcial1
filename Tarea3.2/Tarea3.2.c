#include <stdio.h>
#define DIA 86400
#define HORA 3600
#define MINUTO 60

int main () {
    int day, hour, min, tot;

    printf("Ingrese dias: ");
    scanf("%d,", &day);

    printf("Ingrese horas: ");
    scanf("%d,", &hour);

    printf("Ingrese minutos: ");
    scanf("%d", &min);

    tot = (DIA * day) + (HORA * hour) + (MINUTO * min);

    printf("%d dias, %d horas y %d minutos son: %d", day, hour, min, tot);

    return 0;
}