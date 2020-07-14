#include <stdio.h>

int main(){
    int x = 0;
    double y = 0;

    scanf("%d", &x);
    scanf("%lf", &y);

    double consumo = x/y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}