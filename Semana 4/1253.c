#include <stdio.h>
#include <string.h>
int main() {
    int n=0, i=0, j=0, deslocamento=0;
    char mensagem [51];
    scanf("%d", &n);
    for(n; n>0; n--)
    {
        scanf("%s", &mensagem);
        scanf("%d", &deslocamento);

        //Percorre cada caractere na mensagem
        for(i=0; i<strlen(mensagem); i++)
        {
            /*Se o deslocamento tornar o codigo do caractere menor que 65(Que é o codigo de A), deve-se "dar uma volta" no alfabeto, somando 26 para que 
            o valor do codigo seja perto de 90, que representa a letra Z*/
            if(mensagem[i] - deslocamento < 65)
            {
                j = (mensagem[i] - deslocamento) + 26;
            }
            else 
            {
                j = mensagem[i] - deslocamento;
            }
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}

