#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt_degrau,alt_user,qtd_degrau;

    printf("Altura dos degraus: ");
    scanf("%f",&alt_degrau);

    printf("Altura desejada: ");
    scanf("%f",&alt_user);

    qtd_degrau = alt_user/alt_degrau;

    printf("Voce precisa subir: %.f degraus",qtd_degrau);

    return 0;
}
