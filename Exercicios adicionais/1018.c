#include <stdio.h>

int main() {
    int notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2, notasDe1;
    int n, aux;

    scanf("%d", &n);
    aux = n;

    //Conta as notas de 100 necessárias e retira o valor do total de notas
    notasDe100 = n/100;
    n = n%100;

    //Conta as notas de 50 necessárias e retira o valor do total de notas
    notasDe50 = n/50;
    n = n%50;

    //Conta as notas de 20 necessárias e retira o valor do total de notas
    notasDe20 = n/20;
    n = n%20;

    //Conta as notas de 10 necessárias e retira o valor do total de notas
    notasDe10 = n/10;
    n = n%10;

    //Conta as notas de 5 necessárias e retira o valor do total de notas
    notasDe5 = n/5;
    n = n%5;

    //Conta as notas de 2 necessárias e retira o valor do total de notas
    notasDe2 = n/2;
    n = n%2;

    //O valor que sobrar das operaçoes anteriores será a quantidade de notas de 1 real
    notasDe1 = n;

    //Exibe o resultado
    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", notasDe100);
    printf("%d nota(s) de R$ 50,00\n", notasDe50);
    printf("%d nota(s) de R$ 20,00\n", notasDe20);
    printf("%d nota(s) de R$ 10,00\n", notasDe10);
    printf("%d nota(s) de R$ 5,00\n", notasDe5);
    printf("%d nota(s) de R$ 2,00\n", notasDe2);
    printf("%d nota(s) de R$ 1,00\n", notasDe1);
    return 0;
}