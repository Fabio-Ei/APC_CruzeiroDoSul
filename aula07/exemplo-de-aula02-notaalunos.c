#include <stdio.h>

int main()
{
    int i, aluno;
    float nota, total, media;
    
    
    
    do {
        printf("Digite a quantidade de alunos: ", aluno);
        scanf("%d", &aluno);
    } while(aluno <= 0);
    
    for(i = 1; i <= aluno; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        
        if(nota < 0 || nota > 10) {
            printf("Nota inválida!\n");
            
            do {
                printf("Digite novamente: ");
                scanf("%f", &nota);
            } while(nota < 0 || nota > 10);
        }
        
        total += nota;
    }
    
    media = (float)total / aluno;
    printf("Média da turma: %.2f", media);
    
    return 0;
}