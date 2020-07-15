#include <stdio.h>
int main()
{
    int c=0, cont=0;
    double n=0;
    for(c=0; c < 6; c++)
    {
        scanf("%lf", &n);
        if(n > 0)
        {
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
