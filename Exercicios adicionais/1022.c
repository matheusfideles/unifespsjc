#include <stdio.h>

int main() {
    int n = 0, ano = 0, mes = 0, dias = 0;
    scanf("%d", &n);

    ano = n/365;
    n = n%365;

    mes = n/30;
    n = n%30;

    dias = n;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
    return 0;
}