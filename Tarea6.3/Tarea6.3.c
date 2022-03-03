#include <stdio.h>
#define N 10
int main()
{
    int num, mayor, menor;

    printf("Ingrese los %d valores: \n", N);
    for(int i = 0; i <= N-1; i++) {
        scanf("%d", &num);

        if (i == 0)
            mayor = num;

        if (i == 0)
            menor = num;

        if (num > mayor)
            mayor = num;

        if (num < menor)
            menor = num;
    }

    printf("El numero mayor es: %d y el menor es: %d", mayor, menor);

    return 0;
}
