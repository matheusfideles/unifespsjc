#include <stdio.h>
 
int main() 
{
    int num = 0, horasTrabalhadas = 0;
    double valorPorHora = 0, salario = 0;
    scanf("%d", &num);
    scanf("%d", &horasTrabalhadas);
    scanf("%lf", &valorPorHora);
    salario = horasTrabalhadas * valorPorHora;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
