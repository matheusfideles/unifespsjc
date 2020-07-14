#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAb = (a+b+ abs(a-b))/2;
    int maior = (maiorAb + c + abs(maiorAb-c))/2;

    printf("%d eh o maior\n", maior);

    return 0;
}