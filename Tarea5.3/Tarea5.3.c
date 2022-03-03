#include <stdio.h>

int main ()
{
    float a, b, c;

        printf("Lado a: ");
        scanf("%d,", &a);

        printf("Lado b: ");
        scanf("%d,", &b);

        printf("Lado c: ");
        scanf("%d,", &c);

        if ( a == b && b == c )
            printf("Triangulo Equilatero");

        else
            if (a == b && b != c || a == c && b != a || b == c && b != a)
                printf("Triangulo Isosceles");

        else
            if  (a != b && b != c && c != a)
                printf("Triangulo Escaleno");

    return 0;


}