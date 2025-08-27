#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("Movimentação Peça de Xadrez!"); //

    // Implementação de Movimentação do Bispo - Movimentação: 5 casas na diagonal superior direita
    printf("Movimentação Bispo - 5 Casa para diagonal Superior Direita.\n");
    printf("Posicição Inicial (1,1)\n");

    int Casa_Bispo = 1;

    while (Casa_Bispo < 6){ // Realiza a movimentação da Peça

        Casa_Bispo++;
        int Casa_atual = Casa_Bispo- 1; // Variavel auxiliar para exibição da casa atual que a peça se encontra

        printf("%dª Casa: Cima ↑, Direita →: Posição (%d,%d)\n",Casa_atual,Casa_Bispo,Casa_Bispo);
        
    }
    printf("Posição Final - Bispo (%d,%d)\n",Casa_Bispo,Casa_Bispo);

    // Implementação de Movimentação da Torre - Movimentação: 5 casas para a direita
    printf("\nMovimentação Torre - 5 Casas para Direita\n");
    printf("Posição Inicial (1,1)\n");

    int Casa_Torre = 1;
    do // Realiza a movimentação da Peça
    {
        Casa_Torre++;
        int Casa_Atual = Casa_Torre-1; // Variavel auxiliar para exibição da casa atual que a peça se encontra

        printf("%dª Casa: Direita →: Posição (%d,%d)\n",Casa_Atual,Casa_Torre,Casa_Torre);
    } while (Casa_Torre < 6);

    printf("Posição Final - Torre (%d,%d).\n",Casa_Torre,Casa_Torre);

    // Implementação de Movimentação da Rainha - Movimentação: 8 casas para a esquerda
    printf("\nMovimentação Rainha - 8 Casas para Esquerda\n");
    printf("Posição Inicial (1,1)\n");

    int aux = 0; // Variavel auxiliar para exibição da Posição final conforme movimentação realizada.

    for (int Casa_Rainha = 1; Casa_Rainha < 9; Casa_Rainha++){ // Realiza a movimentação da Peça

        aux = Casa_Rainha + 1;

        printf("%dª Casa: Esquerda ←: Posição (%d,%d)\n",Casa_Rainha,aux,aux);
    }

    printf("Posição Final - Rainha (%d,%d)\n",aux,aux);
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Implementação Movimentação do Cavalo - 2 Casas Para baixo e 1 para esquerda.
    printf("\nMovimentação Cavalo - 2 Casas baixo e 1 casa para Esquerda\n");
    printf("Posição Inicial (1,1)\n");

    int baixo = 1;
    int linha;
    
    do
    {
        baixo++;
        for (linha = 1; linha < 3; linha++){
            printf("%dª Movimento - Casa (%d,%d)\n",linha,baixo,linha);
        }
        
        printf("%dª Movimento - Casa (%d,%d)\n",linha,baixo,linha);
    }while (baixo < 2);
    
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
