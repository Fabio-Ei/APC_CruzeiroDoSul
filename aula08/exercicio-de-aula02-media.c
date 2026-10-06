#include <stdio.h>

int main()
{
    int valor[7];
    int i, acimaMedia = 0;
    float total = 0.0f, media;
    
    for(i = 0; i < 8; i++) {
        printf("Digite o %d° valor: ", i+1);
        scanf("%d", &valor[i]);
        total += valor[i];
    }
    
    media = total / 8;
    
    for(i = 0; i < 8; i++) {
        if(valor[i] > media) {
            acimaMedia++;
        }
    }
    
    printf("Média: %.2f\n", media);
    printf("Valores acima da média: %d", acimaMedia);
    

    return 0;
}
