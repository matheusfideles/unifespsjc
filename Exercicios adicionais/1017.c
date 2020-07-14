#include <stdio.h>

int main(){
    int tempo = 0, velocidadeMedia = 0;
    double quantLitros = 0, distancia = 0;

    scanf("%d", &tempo);
    scanf("%d", &velocidadeMedia);

    distancia = tempo * velocidadeMedia;

    quantLitros = distancia/12;

    printf("%.3lf\n", quantLitros);

    return 0;
}