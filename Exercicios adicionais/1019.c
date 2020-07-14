#include <stdio.h>

int main() {
    int n = 0, horas = 0, minutos = 0, segundos = 0;
    scanf("%d", &n);

    horas = n/3600;
    n = n %3600;

    minutos = n/60;
    n = n % 60;

    segundos = n;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}