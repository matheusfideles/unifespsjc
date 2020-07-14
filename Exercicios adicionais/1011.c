#include <stdio.h>

int main(){
    double raio = 0;
    scanf("%lf", &raio);

    double volume = (4*3.14159*pow(raio,3))/3;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}