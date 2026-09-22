/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigoCadete, etapa, pontos, total, continuar;
    float media;
    
    printf("Digite o código numérico do cadete: ");
    
    total = 0;
    
    for(etapa = 1; etapa <= 3; etapa++) {
        while(pontos < 0 || pontos > 100) {
            printf("Digite a pontuação da %d° etapa, de 0 a 100: ", etapa);
            scanf("%d", &pontos);
        }
        total += pontos;
    }
    printf("%d", total);
    return 0;
}