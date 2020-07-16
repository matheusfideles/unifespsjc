#include <stdio.h>
int main()
{
    int c=0, cont=0;
    int n=0;
    for(c=0; c < 5; c++)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            cont++;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}
