#include <stdio.h>
int main()
{
    int mes; 
    char nomeMes[16][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};  
    scanf("%d", &mes);
    printf("%s\n", nomeMes[mes-1]);
    return 0;
}
