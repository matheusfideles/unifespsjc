#include <stdio.h>

int main() {
    int notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2;
    int moedasDe1r, moedasDe50c, moedasDe25c, moedasDe10c, moedasDe5c, moedasDe1c;
    double n;

    scanf("%lf", &n);
    int notas = n; //Separa o valor lido em duas partes, uma contendo a parte em reais/notas
    int moedas = (n - notas) * 100;//e a outra parte em centavos/moedas

    //Conta as notas de 100 necessárias e retira o valor do total de notas
    notasDe100 = notas/100;
    notas = notas%100;

    //Conta as notas de 50 necessárias e retira o valor do total de notas
    notasDe50 = notas/50;
    notas = notas%50;

    //Conta as notas de 20 necessárias e retira o valor do total de notas
    notasDe20 = notas/20;
    notas = notas%20;

    //Conta as notas de 10 necessárias e retira o valor do total de notas
    notasDe10 = notas/10;
    notas = notas%10;

    //Conta as notas de 5 necessárias e retira o valor do total de notas
    notasDe5 = notas/5;
    notas = notas%5;

    //Conta as notas de 2 necessárias e retira o valor do total de notas
    notasDe2 = notas/2;
    notas = notas%2;

    //O valor que sobrar das operaçoes anteriores será a quantidade de moedas de 1 real
    moedasDe1r = notas;

    //Conta as moedas de 50c e retira o valor do total de moedas
    moedasDe50c = moedas/50;
    moedas = moedas%50;

    //Conta as moedas de 25c e retira o valor do total de moedas
    moedasDe25c = moedas/25;
    moedas = moedas%25;

    //Conta as moedas de 10c e retira o valor do total de moedas
    moedasDe10c = moedas/10;
    moedas = moedas%10;

    //Conta as moedas de 5c e retira o valor do total de moedas
    moedasDe5c = moedas/5;
    moedas = moedas%5;

    //O valor que restar das operações com as moedas será dado em moedas de um centavo
    moedasDe1c = moedas;


    //Exibe o resultado
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notasDe100);
    printf("%d nota(s) de R$ 50.00\n", notasDe50);
    printf("%d nota(s) de R$ 20.00\n", notasDe20);
    printf("%d nota(s) de R$ 10.00\n", notasDe10);
    printf("%d nota(s) de R$ 5.00\n", notasDe5);
    printf("%d nota(s) de R$ 2.00\n", notasDe2);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedasDe1r);
    printf("%d moeda(s) de R$ 0.50\n", moedasDe50c);
    printf("%d moeda(s) de R$ 0.25\n", moedasDe25c);
    printf("%d moeda(s) de R$ 0.10\n", moedasDe10c);
    printf("%d moeda(s) de R$ 0.05\n", moedasDe5c);
    printf("%d moeda(s) de R$ 0.01\n", moedasDe1c);

    return 0;
}
