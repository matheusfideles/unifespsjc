#include <stdio.h>

int main() {
    int horaInicio= 0, horaFim = 0, duracao = 0;
    scanf("%d %d", &horaInicio, &horaFim);

    duracao = 24 - horaInicio + horaFim;
    
    if(duracao > 24)
    {
        printf("O JOGO DUROU %d HORA(S)\n", duracao - 24);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }

    return 0;
}