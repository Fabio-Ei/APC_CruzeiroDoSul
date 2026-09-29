#include <stdio.h>

int main()
{
    char cpf[12];
    float preco, total;
    
    printf("Digite o seu cpf: ", cpf);
    scanf("%11s", &cpf);
    total = 0;
    
    do {
        printf("Digite o preço do produto ou 0 para finalizar: ");
        scanf("%f", &preco);
        if(preco > 0) {
            total += preco;
        }
    } while(preco != 0);
    
    printf("CPF: %s\n", cpf);
    printf("Total da compra: R$%.2f", total);
    
    return 0;
}