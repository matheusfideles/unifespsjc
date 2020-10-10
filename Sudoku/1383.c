#include <stdio.h>
int main()
{
    int checaLinha(int mat[9][9]);
    int checaColuna(int mat[9][9]);
    int checa3x3(int mat[9][9], int linhaInicio, int colunaInicio, int linhaFim, int colunaFim);
    int checaTodas3x3(int mat[9][9]);
    int quantMat=0, lin=0, col=0, mat[9][9], a=0, resp=1; 

    scanf("%d", &quantMat);

    for(a=0; a<quantMat; a++)
    {
        //Leitura dos valores
        for(lin=0; lin<9; lin++)
        {
            for(col=0; col<9; col++)
            {
                scanf("%d", &mat[lin][col]);
            }
        }
    
        //Checa os numeros na linha e na coluna
        resp = checaLinha(mat) && checaColuna(mat);
    
        //Checa as matrizes 3x3 da matriz 9x9, caso a matriz ainda seja considerada válida pelo teste de linhas e colunas
        if(resp==1)
        {
            resp = checaTodas3x3(mat);
        }

        //Imprime resposta
        printf("Instancia %d\n", a+1);
        if(resp == 1)
        {
            printf("SIM\n\n");
        }
        else if(resp == 0)
        {
            printf("NAO\n\n");
        }
        resp=1;
    }
    return 0;   
}

int checaLinha(int mat[9][9])
{
    int lin=0, col=0, resp=1, cont[9], i=0;

    //Inicializando os indices em cont, que irá contar a aparição dos numeros de 1-9 em cada um dos indices da linha/coluna
    //o indice [0] irá contabilizar a aparição do numero 1, o [1] a do numero 2 e assim por diante...
    for(i=0; i<9; i++)
    {
        cont[i]=0;
    }

    //Checa a aparição dos numeros na linha
    for(lin=0; lin<9; lin++)
    {
        for(col=0; col<9; col++)
        {
            switch (mat[lin][col])//Conta a aparição dos numeros de 1 a 9 na linha
            {
                case 1: 
                    cont[0]++;
                    break;
                case 2:
                    cont[1]++;
                    break;
                case 3:
                    cont[2]++;
                    break;
                case 4:
                    cont[3]++;
                    break;
                case 5:
                    cont[4]++;
                    break;
                case 6:
                    cont[5]++;
                    break;
                case 7:
                    cont[6]++;
                    break;
                case 8:
                    cont[7]++;
                    break;
                case 9:
                    cont[8]++;
                    break;
                default://Caso apareça um numero que não esteja entre 1 e 9, a matriz estará incorreta
                    resp=0;
            }
        }
        for(i=0; i<9;i++)//Checa se um número se repetiu ou não esteve presente na linha
        {
            if(cont[i] != 1)//Se não tivermos exatamente 1 de cada número na linha, a matriz não sera uma solução
            {
                resp=0;
            }
            cont[i]=0;//Reinicia os indices em cont para realizar a proxima iteração do laço
        }
    }
    return resp;
}

int checaColuna(int mat[9][9])
{
    int lin=0, col=0, resp=1, cont[9], i=0;
    //Inicializando os indices em cont, que irá contar a aparição dos numeros de 1-9 em cada um dos indices da coluna
    //o indice [0] irá contabilizar a aparição do numero 1, o [1] a do numero 2 e assim por diante...
    for(i=0; i<9; i++)
    {
        cont[i] = 0;
    }

    //Checa a aparição dos numeros na coluna
    for(col=0; col<9; col++)
    {
        for(lin=0; lin<9; lin++)
        {
            switch (mat[lin][col])//Conta a aparição dos numeros de 1 a 9 na coluna
            {
                case 1: 
                    cont[0]++;
                    break;
                case 2:
                    cont[1]++;
                    break;
                case 3:
                    cont[2]++;
                    break;
                case 4:
                    cont[3]++;
                    break;
                case 5:
                    cont[4]++;
                    break;
                case 6:
                    cont[5]++;
                    break;
                case 7:
                    cont[6]++;
                    break;
                case 8:
                    cont[7]++;
                    break;
                case 9:
                    cont[8]++;
                    break;
                default://Caso não apareça um numero que esteja entre 1 e 9, a matriz estará incorreta
                    resp=0;
            }
        }
        for(i=0; i<9;i++)//Checa se um número se repetiu ou não esteve presente na linha
        {
            if(cont[i] != 1)//Se não tivermos exatamente 1 de cada número na linha, a matriz não sera uma solução
            {
                resp=0;
            }
            cont[i]=0;//Reinicia os indices em cont para realizar a proxima iteração do laço
        }
    }
    return resp;
}

int checa3x3(int mat[9][9], int linhaInicio, int colunaInicio, int linhaFim, int colunaFim)
{
    int i=0, j=0, cont[9], resp=1;

    //Inicia os indices no vetor cont, que irá contar a aparição dos numeros de 1 a 9 na submatriz 3x3
    //cont irá armazenar no indice [0] o número de aparições do numero 1, [1] irá armazenar a aparição do numero 2 e assim por diante...
    for(i=0; i<9; i++)
    {
        cont[i]=0;
    }

    //Percorre a matriz 9x9 no intervalo dado nos parametros
    for(i=linhaInicio; i<=linhaFim; i++)
    {
        for(j=colunaInicio; j<=colunaFim; j++)
        {
            switch (mat[i][j])//Conta a aparição dos numeros de 1 a 9 na matriz 3x3
            {
                case 1: 
                    cont[0]++;
                    break;
                case 2:
                    cont[1]++;
                    break;
                case 3:
                    cont[2]++;
                    break;
                case 4:
                    cont[3]++;
                    break;
                case 5:
                    cont[4]++;
                    break;
                case 6:
                    cont[5]++;
                    break;
                case 7:
                    cont[6]++;
                    break;
                case 8:
                    cont[7]++;
                    break;
                case 9:
                    cont[8]++;
                    break;
                default://Caso não apareça um numero que esteja entre 1 e 9, a matriz 9x9 estará incorreta
                    resp=0;
            }
        }
    }

    //Checa se tivemos numeros repetidos ou que estão faltando na matriz 3x3
    for(i=0; i<9; i++)
    {
        if(cont[i]!=1)//Se não tivermos exatamente 1 de cada número na matriz 3x3, a matriz 9x9 não será uma solução
        {
            resp=0;
        }
    }
    return resp;
}

int checaTodas3x3(int mat[9][9])
{
    int resp=1;
    //Confere se todas as submatrizes 3x3 estão corretas
    resp = resp && checa3x3(mat, 0, 0, 2, 2);
    resp = resp && checa3x3(mat, 0, 3, 2, 5);
    resp = resp && checa3x3(mat, 0, 6, 2, 8);
    resp = resp && checa3x3(mat, 3, 0, 5, 2);
    resp = resp && checa3x3(mat, 3, 3, 5, 5);
    resp = resp && checa3x3(mat, 3, 6, 5, 8);
    resp = resp && checa3x3(mat, 6, 0, 8, 2);
    resp = resp && checa3x3(mat, 6, 3, 8, 5);
    resp = resp && checa3x3(mat, 6, 6, 8, 8);
    return resp;
}
