#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, r1, r2;

    printf("Digite dois numeros, que serao elevados um por o outro: ");
    scanf("%f%f",&n1,&n2);

    r1 = pow(n1,n2);
    r2 = pow(n2,n1);

    printf("O primeiro elevado pelo segundo eh: %.2f\n",r1);
    printf("O segundo elevado pelo primeiro eh: %.2f",r2);

    return 0;
}
