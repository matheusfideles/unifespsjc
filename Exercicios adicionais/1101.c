#include <stdio.h>
int main()
{
    int soma, n=1,m=1,i=0, aux=0;

    while(n>0 || m>0)
    {
        scanf("%d %d", &n, &m);

        if(n<=0 || m<=0)
        {
            break;
        }

        //Deixaremos o maior numero na variavel n e o menor em m
        if(m > n)
        {
            aux=m;
            m=n;
            n=aux;
        }

        //Somamos n e m na variavel soma
        soma=n+m;

        //Printamos o menor valor(m)
        printf("%d ", m);
        //Somamos o que está entre n e m
        for(i=1; i<(n-m); i++)
        {
            //Imprime os valores entre m e n
            printf("%d ", m+i);
            soma+=m+i;
        }
        //Imprime o maior valor(n)
        printf("%d ", n);
        printf("Sum=%d\n", soma);
    }

    return 0;
}
