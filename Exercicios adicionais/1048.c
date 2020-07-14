#include <stdio.h>
int main()
{
    double salario=0, reajuste=0, salarioReajustado = 0;
    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400){
        reajuste = 0.15;
    }
    else if(salario > 400 && salario <= 800){
        reajuste = 0.12;
    }
    else if(salario > 800 && salario <= 1200){
        reajuste = 0.1;
    }
    else if(salario > 1200 && salario <= 2000){
        reajuste = 0.07;
    }
    else{
        reajuste = 0.04;
    }

    salarioReajustado = salario*(1+reajuste);

    printf("Novo salario: %.2lf\n", salarioReajustado);
    printf("Reajuste ganho: %.2lf\n", salarioReajustado - salario);
    printf("Em percentual: %.0lf %%\n", reajuste*100);

    return 0;
}
