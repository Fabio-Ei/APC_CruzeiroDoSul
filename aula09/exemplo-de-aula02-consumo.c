#include <stdio.h>

int main()
{
    char dia[20];
    int i, quantidade;
    float consumo;
    
    FILE *arquivo;
    
    printf("Digite a quantidade de registros que serão cadastrados: ");
    scanf("%d", &quantidade);
    
    arquivo = fopen("consumo.txt", "a");
    
    if(arquivo == NULL) {
        
        printf("Não foi possível criar o arquivo ou encontrar o arquivo.");
        return 1;
        
    }
    
    for(i = 0; i < quantidade; i++) {
        
        printf("Dia: ");
        scanf("%19s", dia);
        
        printf("Consumo: ");
        scanf("%f", &consumo);
        
        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }
    
    fclose(arquivo);
    
    printf("Implementação dos registros feito com sucesso.");
    

    return 0;
}
