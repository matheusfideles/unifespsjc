#include <stdio.h>
int main()
{
    int n=0, m=0;
    scanf("%d", &n);

    for(m = 2; m <= n; m+=2)
    {
        printf("%d^2 = %d\n", m, m*m);
    }

    return 0;
}
