#include <stdio.h>
 
int main() 
{
    double raio = 0, area = 0;
    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;
    printf("A=%.4lf\n", area);
    return 0;
}