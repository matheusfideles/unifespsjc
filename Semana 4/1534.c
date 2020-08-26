#include<stdio.h>
int main()
{
    int n=1, i=0, j=0, k=0;
    //Indices na diagonal principal, com exceção do indice do meio(quando n é impar), vale 1
    //Indices na diagonal secundária vale 2
    //O resto dos indices vale 3
    while(scanf("%d",&n) != EOF)
    {
        int mat[n][n];

        //Preenchemos todos os indices com 3
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                mat[i][j]=3;
            }
        }

        //Preenchemos a diagonal principal com 1
        for(i=0; i<n; i++)
        {
            mat[i][i]=1;
        }

        //Preenchemos a diagonal secundária com 2
        for(i=0, j=n-1; j>=0; i++, j--)
        {
            mat[i][j]=2;
        }

        //Imprimimos a matriz
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}