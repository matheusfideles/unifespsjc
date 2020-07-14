#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0, resp = 0;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        resp = a+b+c;
        printf("Perimetro = %.1lf\n", resp);
    }
    else{
        resp = ((a+b)*c)/2;
        printf("Area = %.1lf\n", resp);
    }

    return 0;
}