#include <stdio.h>
int main() {
    char operacao, *pontOperacao;
    double mat[12][12], resp=0, *pontMat, *pontResp;
    int i=0, j=0;

    pontMat = &mat;
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

    return 0;
}
