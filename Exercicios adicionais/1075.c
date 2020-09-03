#include <stdio.h>

int main() 
{
    int n=0,m=0;

    scanf("%d", &n);
    while(m<10000)
    {
        if(m%n==2)
        {
            printf("%d\n", m);
        }
        m++;
    }

    return 0;
}