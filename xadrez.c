#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int bispo = 0, torre, rainha = 0, jogador, movimento = 1, opcao;
    
    // Implementação de Movimentação do Bispo

    do{
        printf("CIMA, DIREITA\n");
        bispo++;
    }while(bispo < 5);

    // Implementação de Movimentação da Torre
       
    for(int torre = 0; torre < 5; torre++){
        printf("DIREITA\n");
    }
    // Implementação de Movimentação da Rainha

    printf("Digite quantas casas para a Rainha se mover: \n");
    scanf("%d", &jogador);
    while (rainha < jogador)
    {
        printf("ESQUERDA \n");
        rainha++;
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Digite a direção que quer mover o cavalo: \n");
    printf("1. Cima-direita: \n");
    printf("2. Cima-esquerda: \n");
    printf("3. Baixo-direita: \n");
    printf("4. Baixo-esquerda: \n");
    scanf("%d", &opcao);

    // Interagindo com  usário pra decidir para onde mover o cavalo;
    switch (opcao)
    {
    case 1:
        while (movimento--){
            for(int i = 0; i < 2; i++){
                printf("CIMA\n");
            }
            printf("DIREITA\n");
        }
        break;
    case 2:      
        while (movimento--){
            for(int i = 0; i < 2; i++){
                printf("CIMA\n");
            }
            printf("ESQUERDA\n");
        }
        break;
    case 3:      
        while (movimento--){
            for(int i = 0; i < 2; i++){
                printf("BAIXO\n");
            }
            printf("DIREITA\n");
        }
        break;
    case 4:      
        while (movimento--){
            for(int i = 0; i < 2; i++){
                printf("BAIXO\n");
            }
            printf("ESQUERDA\n");
        }
        break;
    default:
    printf("Opção inválida!!!");
        break;
    }

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
