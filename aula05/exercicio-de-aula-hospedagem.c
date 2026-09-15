#include <stdio.h>
#include <math.h>

int main()
{
    char tipoHospedagem;
    int quantidadeDiaria;
    float valorDiaria, valorTotal;
    
    printf("Qual o tipo de hospedagem (S - D - T)? ");
    scanf("%c", &tipoHospedagem);
    printf("Qual a quantidade de diárias? ");
    scanf("%d", &quantidadeDiaria);
    
    switch(tipoHospedagem) {
        case 'S':
        case 's':
            valorDiaria = 300.0f;
            break;
        case 'D':
        case 'd':
            valorDiaria = 450.0f;
            break;
        case 'T':
        case 't':
            valorDiaria = 500.0f;
            break;
        default:
            printf("\n Tipo inválido\n");
    }
    
    valorTotal = valorDiaria * quantidadeDiaria;
    printf("\n O valor total da Hospedagem é: R$ %.2f", valorTotal);
    return 0;
}