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


    int bispo =  0 , rainha = 0 , torre = 0 ,  cavalo = 0 , j ; 
    int opcao1;

    printf("Jogo de Xadrez:\n");
    printf("Digite qual Peça Movimentar\n");
    
        do { 
    printf("1. Bispo\n");
    printf("2. Rainha\n");
    printf("3. Torre\n");
    printf("4. Cavalo (for)\n");
    printf("5. Cavalo (while)\n");
    printf("0. Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

switch (opcao1)
{
case 1:  // movimentaçao do bispo

        while( bispo <= 4){
		
        printf("Direta\n");
        printf("Cima\n");
        bispo++;
        
	}
	
	break;

case 2: // movimentacao da rainha 
    
    while( rainha <= 7){
		
        printf("Esquerda\n");
        rainha++;
        
	}
    
    break;


case 3: // movimentaçao da torre
   
   while( torre <= 4){
		
        printf("Direita\n");
        torre++;
        
	}

    break;

case 4: // movimentaçao do cavalo com o FOR
	
    for (cavalo = 0; cavalo <= 0 ; cavalo++)
    	printf("Direita\n");
    	
    	for(j = 0 ; j <= 2 ; j++)
		printf("Cima\n");
	
	break;

case 5: // movimentaçao do cavalo com o while
	
	while(cavalo <= 0){
				
		while(j <= 2){
		printf("Cima\n");	
		j++;
		}
		
		printf("Direita\n");
		cavalo++;
		
	}

	break;

case 0:
    printf("saindo...");

    break;


default:
    printf("Opcao invalida!!");
    break;
}

        } while (opcao1 != 0
		);


    return 0;
}
