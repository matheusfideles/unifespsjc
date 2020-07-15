#include <stdio.h>
int main()
{
    double salario=0, imposto; 
    scanf("%lf", &salario);

    if(salario <= 2000)
    {
        printf("Isento\n");
    }
    else
    {
        if(salario <= 3000)
        {
            imposto = (salario-2000)*0.08;
        }
        else if(salario > 3000 && salario <= 4500)
        {
            imposto = (salario-3000)*0.18+1000*0.08;
        }
        else
        {
            imposto = (salario-4500)*0.28 + (1500)*0.18 + 1000*0.08;
        }
        printf("R$ %.2lf\n", imposto);
    }
    
    return 0;
}
