#include <stdio.h>
int main() {
    int i=0, j=0, k=0;
    char risada[51], sequenciaVogais[51];

    scanf("%s",risada);

    //Enquanto o caractere em i não for vazio
    while(risada[i])
    {
        //Checa se o caractere em i é uma vogal
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u')
        {
            //Armazena as vogais encontradas em sequenciaVogais
            sequenciaVogais[j] = risada[i];
            //Indice j é onde será inserido o \0 em sequenciaVogais
            j++;
        }
        i++; 
    }

    sequenciaVogais[j]='\0';

    //Ultimo indice que contém uma vogal 
    k=strlen(sequenciaVogais)-1;

    //Comparação do char do inicio com o char do fim
    for(i=0; i != j; i++, k--)
    {
        //Se for diferente, então não é igual de trás pra frente.
        if(sequenciaVogais[i] != sequenciaVogais[k])
        {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");
    return 0;
}
