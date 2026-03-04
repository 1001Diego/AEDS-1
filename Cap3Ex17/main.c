#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Descobrir saldo depois de emitir 2 cheques, cpmf = taxa para retirar dinheiro, 0.38%
    float salario,cheque1,cheque2,saldo,cpmf1,cpmf2;

    printf("Digite o salario: ");
    scanf("%f",&salario);

    printf("Digite o valor do Cheque 1: ");
    scanf("%f",&cheque1);

    printf("Digite o valor do Cheque 2: ");
    scanf("%f",&cheque2);

    cpmf1 = cheque1 * 0.38/100;
    cpmf2 = cheque2 * 0.38/100;

    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    printf("Seu saldo atual eh: %.2f",saldo);

    return 0;
}
