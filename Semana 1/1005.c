#include <stdio.h>
 
int main() 
{
    double a = 0, b = 0, MEDIA = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    MEDIA = ((a*3.5)+(b*7.5))/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
