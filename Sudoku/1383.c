#include <stdio.h>
#include <math.h>
int main()
{
    int quantMat=0, lin=0, col=0, mat[9][9], a=0, b=0, aux=0, resp=1, somaGrade[3][3], cont[9], soma=285;
    //285 = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2
    //Não há como outros numeros, dentro do sudoku, darem o mesmo resultado.   

    scanf("%d", &quantMat);

    for(a=0; a<quantMat; a++)
    {
        //Inicializando os indices em somaGrade com 0
        for(lin=0; lin<3; lin++)
        {
            for(col=0; col<3; col++)
            {
                somaGrade[lin][col] = 0;
            }
        }

        //Inicializando os indices em cont
        for(b=0; b<9; b++)
        {
            cont[b] = 0;
        }

        //Leitura dos valores
        for(lin=0; lin<9; lin++)
        {
            for(col=0; col<9; col++)
            {
                scanf("%d", &mat[lin][col]);
            }
        }
    
        //Compara linha
        for(lin=0; lin<9; lin++)
        {
            for(col=0; col<9; col++)
            {
                switch (mat[lin][col])//Conta a aparição dos numeros de 1 a 9 na linha
                {
                    case 1: 
                        cont[0]++;
                        break;
                    case 2:
                        cont[1]++;
                        break;
                    case 3:
                        cont[2]++;
                        break;
                    case 4:
                        cont[3]++;
                        break;
                    case 5:
                        cont[4]++;
                        break;
                    case 6:
                        cont[5]++;
                        break;
                    case 7:
                        cont[6]++;
                        break;
                    case 8:
                        cont[7]++;
                        break;
                    case 9:
                        cont[8]++;
                        break;
                    default:
                        resp=0;
                }
            }
            for(b=0; b<9;b++)//Checa se temos exatamente 1 de cada número de 1-9
            {
                if(cont[b] != 1)
                {
                    resp=0;
                }
                cont[b]=0;
            }
        }

        //Compara coluna
        for(col=0; col<9; col++)
        {
            for(lin=0; lin<9; lin++)
            {
                switch (mat[lin][col])//Conta a aparição dos numeros de 1 a 9 na coluna
                {
                    case 1: 
                        cont[0]++;
                        break;
                    case 2:
                        cont[1]++;
                        break;
                    case 3:
                        cont[2]++;
                        break;
                    case 4:
                        cont[3]++;
                        break;
                    case 5:
                        cont[4]++;
                        break;
                    case 6:
                        cont[5]++;
                        break;
                    case 7:
                        cont[6]++;
                        break;
                    case 8:
                        cont[7]++;
                        break;
                    case 9:
                        cont[8]++;
                        break;
                    default:
                        resp=0;
                }
            }
            for(b=0; b<9;b++)//Checa pra ver se temos exatamente 1 de cada número na coluna.
            {
                if(cont[b] != 1)
                {
                    resp=0;
                }
                cont[b]=0;
            }
        }

        //Soma dos quadrados internos da grade
        for(lin=0; lin<9; lin++)
        {
            for(col=0; col<9; col++)
            {
                aux = pow(mat[lin][col],2);//Elevamos ao quadrado para podermos comparar a soma a 285
                somaGrade[lin/3][col/3] += aux;
            }
        }
        
        //Não deve ser diferente de 285. 285 é a soma de 1^2 ~ 9^2
        for(lin=0; lin<3; lin++)
        {
            for(col=0; col<3; col++)
            {
                if(somaGrade[lin][col] != soma)//A soma do quadrado dos valores dentro de uma grade 3x3 não pode ser diferente de 285
                {
                    resp=0;
                }
            }
        }

        //Imprime resposta
        printf("Instancia %d\n", a+1);
        if(resp == 1)
        {
            printf("SIM\n\n");
        }
        else if(resp == 0)
        {
            printf("NAO\n\n");
        }
        resp=1;
    }
    return 0;   
}
