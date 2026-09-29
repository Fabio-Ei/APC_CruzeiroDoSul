#include <stdio.h>

int main()
{
    int i, conta, senha;
    
    for(i = 1; i <= 3; i++) {
        printf("Digite o número da conta: ");
        scanf("%d", &conta);
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(conta == 12345 && senha == 123) {
            printf("Acesso autorizado.");
            break;
        }
    }
    
    return 0;
}