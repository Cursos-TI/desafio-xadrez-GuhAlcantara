#include <stdio.h>
#include <string.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    char pecas[10]="";
    int casas; 
    const char lado;
    // const char diagonalSuperior[32]=diagonalSuperior, diagonalInferior[16]=diagonalInferior;
    int opcao1; 
    char opcao2 ,opcao3;

    printf("Jogo de Xadrez:\n");
    printf("Digite qual Peça Movimentar\n");
    
        do { 
    printf("1. Bispo\n");
    printf("2. Rainha\n");
    printf("3. Torre\n");
    printf("4. Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

switch (opcao1)
{
case 1: 
        printf("Bispo \n");
        printf("5 casas\n");
        printf("Direita\n");
        printf("Cima\n");
    break;

case 2:
    printf("Rainha\n");
    printf("5 casas\n");
    printf("Direita\n");
    break;


case 3:
    printf("Torre\n");
    printf("8 casas\n");
    printf("Esquerda\n");

    break;

case 4:
    printf("saindo...");

    break;


default:
    printf("Opcao invalida!!");
    break;
}

        } while (opcao1 != 4);


    return 0;
}
