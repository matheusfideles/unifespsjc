#include <stdio.h>
int main()
{
    int diaInicio, horaInicio, minutoInicio, segundoInicio, diaFim, horaFim, minutoFim, segundoFim, duracaoDia, duracaoHora, duracaoMinuto, duracaoSegundo;
    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d\n", &horaInicio, &minutoInicio, &segundoInicio);
    scanf("Dia %d", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    duracaoSegundo = segundoFim-segundoInicio;
    duracaoMinuto = minutoFim-minutoInicio;
    duracaoHora = horaFim-horaInicio;
    duracaoDia = diaFim-diaInicio;

    if(duracaoSegundo < 0)
    {
        duracaoSegundo += 60;
        duracaoMinuto--;
    }

    if(duracaoMinuto < 0)
    {
        duracaoMinuto += 60;
        duracaoHora--;
    }

    if(duracaoHora < 0)
    {
        duracaoHora += 24;
        duracaoDia--;
    }

    printf("%d dia(s)\n", duracaoDia);
    printf("%d hora(s)\n", duracaoHora);
    printf("%d minuto(s)\n", duracaoMinuto);
    printf("%d segundo(s)\n", duracaoSegundo);

    return 0;
}
