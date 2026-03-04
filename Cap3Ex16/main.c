#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas,vlr_hora,sal_min,sal_bruto,sal_liq,imposto;

    printf("Horas trabalhadas: ");
    scanf("%f",&horas);

    printf("Salario minimo: ");
    scanf("%f",&sal_min);

    //Hora trabalhada = meio salario minimo
    vlr_hora = sal_min/2;
    sal_bruto = horas * vlr_hora;
    imposto = sal_bruto * 3/100;
    sal_liq = sal_bruto - imposto;

    printf("Seu salario liquido eh: %.2f",sal_liq);

    return 0;
}
