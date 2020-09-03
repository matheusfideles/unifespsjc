#include <stdio.h>
int main() 
{
    int n[100], i=0, posMaior=0;

    //Inicia os valores no vetor com 0
    for(i=0; i<100; i++)
    {
        n[i]=0;
    }

    //Le os valores para inserir no vetor
    for(i=0; i<100; i++)
    {
        scanf("%d", &n[i]);
    }

    for(i=0; i<100; i++)
    {
        //Assumimos por padrão que o maior numero está no indice 0 
        if(i==0)
        {
            posMaior=0;
        }

        //Se o valor no indice i lido for maior que o valor na posMaior
        if(n[i] > n[posMaior])
        {
            posMaior=i;
        }
    }

    //Imprime a resposta
    printf("%d\n", n[posMaior]);
    printf("%d\n", posMaior+1);

    return 0;
}