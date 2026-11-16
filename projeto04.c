#include <stdio.h>

void exibirCabecalho(void)
{
    printf("========== RANKLAB ==========\nDigite 10 pontuacoes entre 0 e 100:\n");
}

void lerPontuacoes(int v[], int n)
{
    int i;
    
    for(i = 0; i < n; i++) {
        do {
            scanf("%d", &v[i]);
            
        } while(v[i] < 0 || v[i] > 100);
        
    }
    printf("\n");
    
}

void copiarVetor(int origem[], int destino[], int n)
{
    des

}

int main(void)
{
    int exemplo[3];
    int tamanho = 3;
    int bubble[10];
    int selection[10];
    int vetores[10];
    
    exibirCabecalho();
    lerPontuacoes(exemplo, tamanho);
    
    return 0;
}