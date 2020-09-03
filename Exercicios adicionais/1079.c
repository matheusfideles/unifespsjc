#include <stdio.h>
int main() 
{
    int n=0, i=0; 
    double notas[3]={0, 0, 0}, media;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf", &notas[0], &notas[1], &notas[2]);
        media = (notas[0]*2 + notas[1]*3 + notas[2]*5)/10;
        printf("%.1lf\n", media);
    }

    return 0;
}