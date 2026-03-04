#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p_final,p_fabrica,lucro,perc_lucro,imposto,perc_imposto;

    printf("Valor de fabrica do carro: ");
    scanf("%f",&p_fabrica);

    printf("Percentual de lucro do distribuidor: ");
    scanf("%f",&perc_lucro);

    printf("Percentual de impostos: ");
    scanf("%f",&perc_imposto);

    lucro = p_fabrica * perc_lucro/100;
    imposto = p_fabrica * perc_imposto/100;
    p_final = p_fabrica + lucro + imposto;

    printf("O lucro do produtor eh: %.2f reais\n",lucro);
    printf("O valor dos impostos eh: %.2f reais\n",imposto);
    printf("O valor final do carro eh: %.2f reais",p_final);

    return 0;
}
