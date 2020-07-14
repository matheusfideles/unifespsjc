#include <stdio.h>

int main() {
    double n1=0, n2=0, n3=0, n4=0, exame=0, media=0;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    printf("Media: %.1lf\n", media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5){
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);

        if( (media + exame)/2 >= 5){
            printf("Aluno aprovado.\n");
        }
        else if(media <= 4.9){
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", (media + exame)/2);
    }
    

    return 0;
}   