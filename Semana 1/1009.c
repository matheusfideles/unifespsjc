#include <stdio.h>
 
int main() 
{
    char nome[21];
    double salario = 0, vendas = 0, total = 0;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = salario + (0.15*vendas);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
