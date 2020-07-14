#include <stdio.h>
#include <math.h>

int main() {
    int codigo, quantidade;
    double precos[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    scanf("%d %d", &codigo, &quantidade);
    double total = precos[codigo-1] * quantidade;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}