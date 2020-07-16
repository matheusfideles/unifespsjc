#include <stdio.h>
int main()
{
    int n=0, m=0;
    scanf("%d", &n);

    for(n; n > 0; n--)
    {
        scanf("%d", &m);

        if(m == 0)
        {
            printf("NULL");
        }
        else if(m % 2 != 0 && m < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(m % 2 != 0 && m > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(m % 2 == 0 && m < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(m % 2 == 0 && m > 0)
        {
            printf("EVEN POSITIVE\n");
        }
    }

    return 0;
}
