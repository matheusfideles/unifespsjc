#include <stdio.h>
int main() {
    int num[4] = {0, 0, 0, 0};
    int i=0, j=0, aux=0, triAbc=1, triAbd=1, triAcd=1, triBcd=1;
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
    
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(num[i] > num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    triAbc = num[0] + num[1] > num[2];
    triAbd = num[0] + num[1] > num[3];
    triAcd = num[0] + num[2] > num[3];
    triBcd = num[1] + num[2] > num[3];

    if(triAbc || triAbd || triAcd || triBcd)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }    
    return 0;
}
