#include <stdio.h>

int main()
{
    int quantidade_ma, quantidade_ta, total;
    
    printf("Quantidade recebida pela manhã? ");
    scanf("%d", &quantidade_ma);
    printf("Quantidade recebida à tarde? ");
    scanf("%d", &quantidade_ta);
    total = quantidade_ma + quantidade_ta;
    printf("Total de produtos recebidos no dia: %d", total);

    return 0;
}
