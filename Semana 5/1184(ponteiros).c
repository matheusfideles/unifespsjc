#include <stdio.h>
int main() {
    char operacao, *pontOperacao;
    double resp=0, *pontMat, *pontResp;
    int i=0, j=0;

    pontMat = malloc(12*12*sizeof(double));   //Cria a matriz dinamica double 12x12
    pontResp = &resp;
    pontOperacao = &operacao;

    //Le a operacao
    scanf("%c", pontOperacao);

    //Le os numeros da matriz
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", pontMat + (i*12) + j );
        }
    }

    //Soma os elementos abaixo da diagonal principal
    for(i=1; i<12; i++)
    {
        for(j=0; j<i; j++)
        {
            *(pontResp) += *(pontMat + (i*12) + j);
        }
    }

    
    if(*(pontOperacao) = 'M')
    {
        *(pontResp) /= 66;//Divide pelo total de casas da matriz abaixo da diagonal principal
        printf("%.1lf\n", *(pontResp));//Imprime a media
    }
    else if(*(pontOperacao) = 'S')
    {
        printf("%.1lf\n", *(pontResp));//Imprime a soma
    }

    free(pontMat);
    return 0;
}
