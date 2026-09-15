#include <stdio.h>
#include <math.h>

int main()
{
    float largura, comprimento, caixa_valor, area, custo;
    int caixa_quantidade;
    
    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);
    printf("Qual é o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &caixa_valor);
    area = largura * comprimento;
    printf("Área total a ser revestida: %.2f m²\n", area);
    caixa_quantidade = ceil (area / 2.5);
    printf("Quantidade de caixas necessárias: %d\n", caixa_quantidade);
    custo = (float) caixa_quantidade * caixa_valor;
    printf("Custo total da compra: R$ %.2f", custo);
    
    return 0;
}
