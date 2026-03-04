#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float alt_quadro,alt_escada,distancia;

    printf("Digite a altura da escada: ");
    scanf("%f",&alt_escada);

    printf("Digite a altura para pregar o quadro: ");
    scanf("%f",&alt_quadro);

    distancia = pow(alt_escada,2) - pow(alt_quadro,2);
    distancia = sqrt(distancia);

    printf("A distancia em que precisa ficar a escada eh de aproximadamente %.2f metros",distancia);

    return 0;
}
