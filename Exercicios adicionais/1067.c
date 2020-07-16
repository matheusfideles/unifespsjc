#include <stdio.h>
int main()
{
    int n=0, c=1;
    scanf("%d", &n);
    while(c <= n)
    {
        printf("%d\n", c);
        c += 2;
    }
    return 0;
}
