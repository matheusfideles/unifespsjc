#include <stdio.h>
int main()
{
    int x=0, y=0, aux=0, soma=0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(y > x)
    {
        aux = x;
        x = y;
        y = aux;
    }

    while(y < x)
    {
        y++;
        if(y % 2 != 0 && y != x)
        {
            soma += y;
        }
    }

    printf("%d\n", soma);

    return 0;
}
