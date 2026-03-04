#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hora,h,min,conversao;

    printf("Digite a hora desejada: ");
    scanf("%f",&hora);

    h = (int)hora;
    min = hora - h;
    conversao = (h*60) + (min*100);

    printf("A hora desejada em minutos eh: %2.f",conversao);

    return 0;
}
