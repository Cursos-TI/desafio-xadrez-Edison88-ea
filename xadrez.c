#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Declarando procedimentos
void moverTorre(int casas){ 
    if (casas > 0){
        printf("DIREITA\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas){ 
    if (casas > 0){
        printf("ESQUERDA\n");
        moverRainha(casas - 1);
    }
}
   

int main() {
    // Nível Novato - Movimentação das Peças

    int bispo, bispo1, torre, rainha, jogador, movimento = 1, opcao;
    
    // Implementação de Movimentação do Bispo

    printf("*** Movimento Bispo ***\n");
    for(bispo = 0; bispo < 5; bispo++){
        for(bispo1 = 0; bispo1 < 1; bispo1++){
            printf("CIMA, ");
        }
        printf("DIREITA\n");    
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("*** Movimento Torre ***\n");
    moverTorre(5);
    printf("\n");

    // Implementação de Movimentação da Rainha

    printf("*** Movimento Rainha ***\n");
    moverRainha(8);
    printf("\n");
    
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("*** Movimento Cavalo ***\n");
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


    return 0;
}
