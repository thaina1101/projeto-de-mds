#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Manda os brabo: \n");
    scanf("%f" "%f""%f", &a, &b, &c);

    delta = b*b - 4*a*c;

    printf("Delta = %f\n", delta);

    if (delta < 0 ){

        printf("nao possui resultados reais");
    }
    if (delta == 0 ){

        printf("apenas um real ou os dois iguais");
    }
    if (delta > 0)
    {
        x1 = (-b + sqrt (delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

         printf("resultado foi x'= %f e x''= %f", x1,x2);
    }


    return 0;
}
