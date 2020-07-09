#include <stdio.h>

int main() {
    int notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe2;
    int moedasDe1r, moedasDe50c, moedasDe25c, moedasDe10c, moedasDe5c, moedasDe1c;
    double n;

    scanf("%lf", &n);
    int notas = n; 
    int moedas = (n - notas) * 100;

    notasDe100 = notas/100;
    notas = notas%100;
    notasDe50 = notas/50;
    notas = notas%50;
    notasDe20 = notas/20;
    notas = notas%20;
    notasDe10 = notas/10;
    notas = notas%10;
    notasDe5 = notas/5;
    notas = notas%5;
    notasDe2 = notas/2;
    notas = notas%2;

    moedasDe1r = notas/1;
    notas = notas%1;
    moedasDe50c = moedas/50;
    moedas = moedas%50;
    moedasDe25c = moedas/25;
    moedas = moedas%25;
    moedasDe10c = moedas/10;
    moedas = moedas%10;
    moedasDe5c = moedas/5;
    moedas = moedas%5;
    moedasDe1c = moedas/1;

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