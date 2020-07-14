#include <stdio.h>
#include <math.h>

int main() {
    double lados[3], aux;
    int i, j;
    scanf("%lf %lf %lf", &lados[0], &lados[1], &lados[2]);

    for(i=0; i < 3; i++){
        for(j = i + 1; j < 3; j++)
        {
            if(lados[i] < lados[j])
            {
                aux = lados[j];
                lados[j] = lados[i];
                lados[i] = aux;
            }
        }
    }
    
    if(lados[0] >= lados[1]+lados[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(pow(lados[0],2) == pow(lados[1],2) + pow(lados[2],2) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if(pow(lados[0],2) > pow(lados[1],2) + pow(lados[2],2) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(pow(lados[0],2) < pow(lados[1],2) + pow(lados[2],2) )
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(lados[0] == lados[1] && lados[1] == lados[2])
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(lados[0] == lados[1] || lados[1] == lados[2])
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        
    }
    return 0;
}   