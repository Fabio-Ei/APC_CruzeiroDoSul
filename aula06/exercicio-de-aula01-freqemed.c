#include <stdio.h>
#include <math.h>

int main()
{
    float media, frequenciaPercentual;
    
    printf("Qual a média final do aluno?");
    scanf("%f", &media);
    printf("Qual o percentual de frequência?");
    scanf("%f", &frequenciaPercentual);
    
    if(frequenciaPercentual >= 75) {
        if(media >= 6) {
            printf("Parabéns, você foi aprovado com a média %.2f\n", media);
            printf("e também com frequência %.2f", frequenciaPercentual);
        } else {
            printf("O aluno foi reprovado com a media abaixo da média");
        }
    } else {
        printf("O aluno foi reprovado pelo excesso de faltas");
    }
    return 0;
}