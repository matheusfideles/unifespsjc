#include <stdio.h>
int main() {
    int n=1,m=1, soma=0, i=0, somaSemZero[20];

    while(n!=0 && m!=0)
    {
        scanf("%d %d", &n, &m);

        //Se n e m forem 0, saia do laço.
        if(n==0 && m==0)
        {
            break;
        }

        //calcula a soma
        soma=n+m;

        //Percorre cada algarismo da soma, armazenando aqueles que são diferentes de 0 no vetor somaSemZero
        while(soma>0)
        {
            if(soma%10!=0)
            {
                somaSemZero[i]=soma%10;
                i++; //i armazena a quantidade de algarismos diferentes de 0, essa quantidade também é o comprimento de somaSemZero
            }
            soma/=10;
        }

        /*Como o valor em somaSemZero estão armazenados de trás para frente, começando do indice i-1 até 0, teremos que imprimir
        os valores na ordem inversa*/
        for(i--; i>=0; i--)
        {
            printf("%d", somaSemZero[i]);
        }
        printf("\n");
        i=0;
    }
    return 0;
}

