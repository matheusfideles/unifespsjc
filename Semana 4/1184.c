#include <stdio.h>
int main() {
    char operacao;
    double mat[12][12], resp=0;
    int i=0, j=0;

    //Le a operacao
    scanf("%c", &operacao);

    //Le os numeros da matriz
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    //Soma os elementos abaixo da diagonal principal
    for(i=1; i<12; i++)
    {
        for(j=0; j<i; j++)
        {
            resp += mat[i][j];
        }
    }

    
    if(operacao = 'M')
    {
        resp /= 66;//Divide pelo total de casas da matriz abaixo da diagonal principal
        printf("%.1lf\n", resp);//Imprime a media
    }
    else if(operacao = 'S')
    {
        printf("%.1lf\n", resp);//Imprime a soma
    }

    return 0;
}
