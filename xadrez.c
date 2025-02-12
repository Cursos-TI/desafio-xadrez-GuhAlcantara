#include <stdio.h>
#include <string.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    int bispo =  0 , rainha = 0 , torre = 0 ,  cavalo = 0 , j ; 
    int opcao1;

    printf("Jogo de Xadrez:\n");
    printf("Digite qual Peça Movimentar\n");
    
         // menu inicial para seleção das peças 

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

        } while (opcao1 != 0); // finalização do menu , sendo o 0(zero) a opção de sair no menu.


    return 0;
}
