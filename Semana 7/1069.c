#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int comecoDiamante=0, finalDiamante=0, contaDiamante=0, i=0, n=0;
    char solo[1001];

    scanf("%d", &n);//Lê o numero de casos de teste

    while(n--)//Enquanto o numero de casos de teste for maior que 0
    {
        scanf("%s", solo);

        //Passa pela string solo
        for(i=0; i<strlen(solo); i++)
        {
            if(solo[i]==60)//Se encontra a metade <
            {
                comecoDiamante++;
            }
            else if(solo[i]==62 && comecoDiamante!=0)//Se encontra a metade > e tivermos pelo menos um <, já que não pode formar diamante com ><
            {
                finalDiamante++;
            }
            
            if(comecoDiamante!=0 && finalDiamante!=0) //Se temos mais de um de cada uma das metades.
            {
                contaDiamante++; //Formamos o diamante
                //Subtraimos as metades usadas
                comecoDiamante--; 
                finalDiamante--;    
            }
        };
        printf("%d\n", contaDiamante);//Imprime o numero de diamantes formados

        //Resetamos as variáveis para a proxima iteração do laço
        contaDiamante=0;
        comecoDiamante=0;
        finalDiamante=0;
    }
    return 0;
}
