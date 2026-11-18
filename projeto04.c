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
    int i;
    for(i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
    
}

void exibirVetor(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    
}

int bubbleSort(int v[], int n)
{
    int i, j, auxiliar, trocas = 0;
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(v[j] > v[j+1]) {
                auxiliar = v[j];
                v[j] = v[j+1];
                v[j+1] = auxiliar;
                trocas += 1;
            }
        }
    }
    return trocas;
}

int selectionSort(int v[], int n)
{
    int i, j, posicaoMenor, auxiliar, trocas = 0;
    
    for(i = 0; i < n-1; i++) {
        posicaoMenor = i;
        for(j = i +1; j < n; j++) {
            if(v[posicaoMenor] > v[j]) {
                posicaoMenor = j;
                trocas += 1;
            }
        }
        auxiliar = v[i];
        v[i] = v[posicaoMenor];
        v[posicaoMenor] = auxiliar;
    }
    return trocas;
}

}

int main(void)
{
    int pontuacoes[10];
    int tamanho = 10;
    int bubble[10];
    int selection[10];
    int insertion[10];
    
    exibirCabecalho();
    lerPontuacoes(pontuacoes, tamanho);
    
    copiarVetor(pontuacoes, bubble, tamanho);
    bubbleSort(bubble, tamanho);
    
    copiarVetor(pontuacoes, selection, tamanho);
    selectionSort(selection, tamanho);
    
    return 0;
}