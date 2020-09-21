#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Pegar a strlen da maior string
    //Justificar em strlen(maiorString)
    char palavra[50][51];
    int n=1, m=0, lenMaior=0,i=0, quantJust=0;

    while(n!=0)
    {
        scanf("%d", &n);//Lê o numero de palavras

        //Para o laço quando a quantidade de numeros N for igual a 0
        if(n==0)
        {
            break;
        }
        else if(n!=0 && m!=0)
        {
            printf("\n");
        }

        for(i=0; i<n; i++)
        {
            scanf("%s", palavra[i]);

            if(strlen(palavra[i]) > lenMaior)//Encontra a maior string
            {
                lenMaior = strlen(palavra[i]);//Armazena seu tamanho
            }
        }

        for(i=0; i<n; i++)
        {
            quantJust = lenMaior-strlen(palavra[i]);//Define a quantidade de espaços a esquerda de cada palavra
            while(quantJust--)//Imprime essa quantidade de espaços
            {
                printf(" ");
            }
            printf("%s\n", palavra[i]);//Imprime a palavra
        }
        lenMaior=0;
        m++;
    }   
    return 0;
}
