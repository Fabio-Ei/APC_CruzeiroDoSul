#include <stdio.h>

int main()
{
    char local[50], local_maiorConsumo[50];
    int quant_local = 0, quant_alerta = 0;
    float consumo, limite, consumo_total = 0.0f, consumo_medio, maior_consumo;
    
    FILE arquivo_consumo;
    
    fopen("consumo_campus.txt", "r");
    
    if(arquivo_consumo == NULL) {
        printf("Não foi possível encontrar o arquivo.");
    }
    
    while(fscanf(arquivo_consumo, "%49s %f %f", local, &consumo, &limite) == 3) {
        
        quant_local += 1;
        consumo_total += consumo;
        
        if(maior_consumo < consumo) {
            local_maiorConsumo = local;
            maior_consumo = consumo;
        }
        
        if(limite < consumo) {
            quant_limite += 1;
        }
        
    }
    
    fclose(arquivo_consumo);
    
    
    FILE arquivo_relatorio;
    
    fopen("relatorio_consumo.txt", "w");
    
    fprintf(arquivo_relatorio,"========== ECOCAMPUS ==========\n");
    fprintf(arquivo_relatorio,"Consumo total: %.2f litros\n", consumo_total);
    fprintf(arquivo_relatorio,"Consumo medio: %.2f litros\n", (float)consumo_total / quant_local);
    
    
    

    return 0;
}
