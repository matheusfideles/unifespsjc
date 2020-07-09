#include <stdio.h>
 
int main() 
{
    int codigo, quant = 0, i = 0;
    double valor = 0, valorAPagar = 0;
    for(i = 0; i <= 1;i++)
    {
        scanf("%d %d %lf", &codigo, &quant, &valor);
        valorAPagar += quant*valor;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", valorAPagar);
    return 0;
}
