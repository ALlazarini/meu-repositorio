/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldo = 2000.00;
    int opcao;
    float valor;
    
    do {
        printf("1 - Sacar\n");
        printf("2 - Depositar\n");
        printf("3 - Consultar Saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite o valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor > saldo) {
                    printf("Saldo insuficiente!\n");
                } else if (valor <= 0) {
                    printf("Valor inválido para saque!\n");
                } else {
                    saldo -= valor;
                    printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;
            
            case 2:
                printf("Digite o valor do depósito: R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor inválido para depósito!\n");
                } else {
                    saldo += valor;
                    printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;
            
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            
            case 4:
                printf("Obrigado por utilizar o caixa eletrônico!\n");
                break;
            
            default:
                printf("Opção inválida! Escolha uma opção válida.\n");
        }
    } while (opcao != 4);

    return 0;
}