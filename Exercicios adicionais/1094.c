#include <stdio.h>
int main() 
{
    char tipo;
    int n=0, i=0, quantCobaiaTotal=0, quant[3]={0,0,0}, quantCobaiaExp=0;

    //Lê a quantidade n de experimentos que serão realizados
    scanf("%d", &n);

    //Lê a quantidade de cobaias e o tipo da cobaia no experimento
    for(i=0; i<n; i++)
    {
        scanf("%d %c", &quantCobaiaExp, &tipo);
        if(tipo == 'C')
        {
            //Armazena a quantidade de coelhos usada no experimento no indice 0 de quant
            quant[0]+=quantCobaiaExp;
        }
        else if(tipo == 'R')
        {
            //Armazena a quantidade de ratos usada no experimento no indice 1 de quant
            quant[1]+=quantCobaiaExp;
        }
        else
        {
            //Armazena a quantidade de sapos usada no experimento no indice 2 de quant
            quant[2]+=quantCobaiaExp;
        }

        //Soma a quantidade de cobaias usadas no experimento ao total de cobaias usadas
        quantCobaiaTotal+=quantCobaiaExp;
    }

    //Imprime a resposta
    printf("Total: %d cobaias\n", quantCobaiaTotal);
    printf("Total de coelhos: %d\n", quant[0]);
    printf("Total de ratos: %d\n", quant[1]);
    printf("Total de sapos: %d\n", quant[2]);
    printf("Percentual de coelhos: %.2lf %%\n", (double)quant[0]*100/quantCobaiaTotal);
    printf("Percentual de ratos: %.2lf %%\n", (double)quant[1]*100/quantCobaiaTotal);
    printf("Percentual de sapos: %.2lf %%\n", (double)quant[2]*100/quantCobaiaTotal);
    return 0;
}