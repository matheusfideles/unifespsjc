#include <stdio.h>
int main()
{
    int n=0, x=0, in=0, out=0;
    scanf("%d", &n);

    for(n; n > 0; n--)
    {
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
        
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
