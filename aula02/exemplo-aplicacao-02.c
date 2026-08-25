/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float preco, total;
    int quantidade_cafe;
    printf("Digite a quantidade de café: ");
    scanf("%d", &quantidade_cafe);
    printf("Digite o preço do café: ");
    scanf("%f", &preco);
    total = quantidade_cafe * preco;
    printf("O preço total é: %.2f", total);
    
    return 0;
    
}