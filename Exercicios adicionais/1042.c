#include <stdio.h>

int main() {
    int numeros[3], resultado[3], i, j, aux;
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

    //Copia os valores dentro de numeros para o vetor resultado
    for(i=0; i<3; i++)
    {
        resultado[i] = numeros[i];
    }

    //Organiza o vetor resultado -14 7 21 -->  
    for(i=0; i < 3; i++){
        for(j = i + 1; j < 3; j++)
        {
            if(resultado[i] > resultado[j])
            {
                aux = resultado[j];
                resultado[j] = resultado[i];
                resultado[i] = aux;
            }
        }
    }

    //Mostra o resultado
    for(i=0; i<3; i++)
    {
        printf("%d\n", resultado[i]);
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}   