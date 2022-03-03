#include <stdio.h>

int main()
{
    int num, sum, perfecto;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum = sum + i;
    }

    if (sum == num)
        perfecto = 1;
    else
        perfecto = 0;

    if (perfecto == 1)
        printf("El numero %d es perfecto", num);

    if (perfecto == 0)
        printf("El numero %d no es perfecto", num) ;

    return 0;
}
