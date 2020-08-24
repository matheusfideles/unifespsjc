#include <stdio.h>
#include <string.h>
int main() {
    int n=0, i=0, j=0, lenA=0, lenB=0, maiorLen=0;
    char a[51],b[51], resp[101];
    
    scanf("%d", &n);

    for(n; n>0; n--)
    {
        scanf("%s %s", a, b);
        lenA = strlen(a);
        lenB = strlen(b);
        
        //Determina qual palavra é a maior, armazena o comprimento dela em maiorLen
        if(lenA>lenB)
        {
            maiorLen=lenA;
        }
        else
        { 
            maiorLen=lenB;
        }

        //Intercala as letras das duas palavras, baseando-se no comprimento da maior palavra
        for(i=0; i<maiorLen; i++)
        {
            //Enquanto i estiver menor que lenA, ainda temos letras na palavra A para intercalar
            if(i<lenA)
            { 
                printf("%c", a[i]);
            }
            //Enquanto i estiver menor que lenB, ainda temos letras na palavra B para intercalar
            if(i<lenB)
            {
                printf("%c", b[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

