
#include <stdio.h>
    int main ()
    {
        float pri,tot;
        int dis;

        printf("¿Cual es el precio del producto? ");
        scanf("%f,", &pri);
        printf("¿Cual es el porcentaje de descuento? ");
        scanf("%d", &dis);

        tot=pri-(pri/100*dis);

        printf("El precio a pagar es: %.2f", tot);

        return 0;
    }
