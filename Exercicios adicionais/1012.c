#include <stdio.h>

int main(){
    double a = 0, b = 0, c = 0;
    double triangulo = 0, circulo = 0, trapezio = 0, quadrado = 0, retangulo = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    triangulo = (a * c) / 2;
    circulo = 3.14159 * pow(c, 2);
    trapezio = ((a + b)*c) / 2;
    quadrado = pow(b,2);
    retangulo = a*b;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}