#include <stdio.h>
int main() {
    int n=1, i=0, j=0, l=0, aux=0;

    while(n!=0)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }

        //Variavel auxiliar para armazenar N
        aux=n;

        //Crio uma matriz com as dimensoes iguais a N
        int mat[n][n];

        //Iguala todos os valores da matriz a 0
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                mat[i][j]=0;
            }
        }

        //Passo somando 1 nos indices da matriz/submatriz, quando não der pra formar outra submatriz quadrada, paro o loop
        while(n>0)
        {
            for(i=l; i<n; i++)
            {
                for(j=l; j<n; j++)
                {
                    mat[i][j]++;
                }
            }

            //L determina o primeiro indice da submatriz/matriz
            l++;

            //Decrementamos N, fazendo com que a submatriz s vá de mat[l][l] até mat[n-1][n-1] nas iteraçoes do laço
            n--;
        }

        l=0;

        //Imprime matriz
        for(i=0; i<aux; i++)
        {
            for(j=0; j<aux; j++)
            {
                //Espaçamento no primeiro indice da linha é de 3
                if(j==0)
                {
                    printf("%3d", mat[i][j]);
                }
                //No resto dos indices é 4
                else
                {
                    printf("%4d", mat[i][j]);
                }   
            }
            printf("\n");
        }
        n=1;
        printf("\n");
    }

    return 0;
}
