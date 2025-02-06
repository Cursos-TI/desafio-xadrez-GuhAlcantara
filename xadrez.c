#include <stdio.h>

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

    const char bispo[5] = bispo , rainha[6]=rainha , torre[5]=torre;
    int casas; 
    const char esquerda[8]=esquerda , direita[7]=direita, cima[4]=cima, baixo[5]=baixo , diagonal[8]=diagonal;
    const char diagonalSuperior[32]=diagonalSuperior, diagonalInferior[16]=diagonalInferior;
    int opcao1; 
    char opcao2[20] ,opcao3;

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
        printf("Selecionado : Bispo\n");
        
        Printf("Digite a Direcao")



        switch (opcao2)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }

        break;
    
    case 2:
       printf("Selecionado : Rainha\n");


        break;

    case 3:
        printf("Selecionado : Torre\n");


        break;


    default:
    printf("Opcao invalida");

        break;
    }





    return 0;
}
