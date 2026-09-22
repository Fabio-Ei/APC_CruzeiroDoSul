#include <stdio.h>

int main()
{
    int rodada, contador, pontos;
    rodada = 1;
    contador = 0;
    while(rodada <= 3) {
        printf("Quantos pontos na %d° rodada? ", rodada);
        scanf("%d", &pontos);
        contador += pontos;
        rodada++;
    }
    
    printf("A equipe tem %d", contador);
    return 0;
}