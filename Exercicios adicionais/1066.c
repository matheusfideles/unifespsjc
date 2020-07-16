#include <stdio.h>
int main()
{
    int c=0, contPar=0, contImpar=0, contPositivo=0, contNegativo=0;
    int n=0;
    for(c=0; c < 5; c++)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            contPar++;
        }
        else
        {
            contImpar++;
        }

        if(n < 0)
        {
            contNegativo++;
        }
        else if(n > 0)
        {
            contPositivo++;
        }
    }
    printf("%d valor(es) par(es)\n", contPar);
    printf("%d valor(es) impar(es)\n", contImpar);
    printf("%d valor(es) positivo(s)\n", contPositivo);
    printf("%d valor(es) negativo(s)\n", contNegativo);

    return 0;
}
