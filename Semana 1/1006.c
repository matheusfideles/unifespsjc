#include <stdio.h>
 
int main() 
{
    double a = 0, b = 0, c = 0, MEDIA = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    MEDIA = ((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}
