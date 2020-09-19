#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{char nome[51]; double valor;}produto;
int main()
{
    produto frutas[100];
    int n=0, m=0, i=0, j=0, p=0, quant=0;
    double total=0;
    char produtoDesejado[51];

    //Lê a quantidade de idas a feira
    scanf("%d",&n);

    while(n--)//Enquanto a quantidade restante de idas a feira não for 0
    {
        scanf("%d", &m);//Lê a quantidade de produtos disponiveis na feira
        for(i=0; i<m; i++)
        {
            scanf("%s %lf", frutas[i].nome, &frutas[i].valor);//Lê o nome e o valor de cada produto
        }

        scanf("%d", &p); //Lê a quantidade de produtos que vão ser levados
        
        for(i=0; i<p; i++)
        {
            scanf("%s %d", produtoDesejado, &quant); //Lê as linhas que dirão sobre o nome e a quantidade do produto que irá ser levado
            for(j=0; j<m; j++) //Procura o nome do produto dentro da matriz
            {
                if(strcmp(produtoDesejado, frutas[j].nome)==0)//Caso encontre
                {
                    total += quant*frutas[j].valor; //Soma o preço total do produto no total da compra 
                }
            }
        }
        printf("R$ %.2lf\n", total);//Imprime o total gasto nessa ida a feira
        total=0;
    }

    return 0;
}
