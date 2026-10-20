#include <stdio.h>

int main()
{
    int numero, i;
    FILE *arquivo;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    arquivo = fopen("tabuada.txt", "w");
    
    if(arquivo == NULL) {
        
        printf("Não foi possível criar o arquivo.");
        return 1;
        
    }
    
    for(i = 0; i <= 10; i++) {
        fprintf(arquivo, "%d x %d = %d\n", numero, i, numero*i);
    }
    
    fclose(arquivo);
    
    printf("Tabuada concluida com sucesso.");
    

    return 0;
}
