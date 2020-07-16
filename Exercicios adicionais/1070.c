#include <stdio.h>
int main()
{
    int n=0, c=0;
    scanf("%d", &n);
    if(n % 2 != 0)
    {
        printf("%d\n", n);
        c++;
    }
    for(c; c<6; c++)
    {
        if(n % 2 != 0)
        {
            n+=2;
            printf("%d\n", n);
        }
        else if(n%2 == 0)
        {
            n++;
            printf("%d\n", n);
        }
    }
    return 0;
}
