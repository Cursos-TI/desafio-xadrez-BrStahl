#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo

//Funçao Movimentação Bispo
void Movimentacao_Bispo(int linha, int coluna, int movimento) {
    if (movimento > 5) {
            
        printf("Posição Final - Bispo (Linha: %d, Coluna: %d)\n",linha,coluna);
        printf("\n-----------------------------------------------\n");
        return; // Caso base - para a recursão
    }
    
    // Loop externo - movimento vertical
    for (int vertical = 0; vertical < 2; vertical++) {
        if (vertical == 0) {
            linha++; // Move para cima
            continue; // Pula para próxima iteração do loop vertical
        }

        // Loop interno - movimento horizontal
        for (int horizontal = 0; horizontal < 2; horizontal++) {
            if (horizontal == 0) {
                coluna++; // Move para direita
                continue; // Pula para próxima iteração do loop horizontal
            }
            
            // Só executa quando ambos os movimentos foram feitos
            printf("%dª Casa: Cima ↑, Direita →: Posição (Linha: %d, Coluna: %d)\n",
                   movimento, linha, coluna);
            break; // Sai do loop interno após mostrar posição
        }
        break; // Sai do loop externo após completar movimento
    }
    // Chamada recursiva para próximo movimento
    Movimentacao_Bispo(linha, coluna, movimento + 1);
}

// Função Movimentação Torre
void Movimentacao_Torre(int linha,int coluna,int movimento){
    if(movimento > 5){
        printf("Posição Final - Torre (Linha: %d, Coluna: %d).\n",linha,coluna);
        printf("\n-----------------------------------------------\n");
        return;

    } else if( coluna > 0 && coluna < 7){

        for (int i = 1; i > 0 && i < 6;i++){
            coluna++;
            printf("%dª Casa: Direita →: Posição (Linha:%d , Coluna: %d)\n",movimento,linha,coluna);
            break;
        }
        Movimentacao_Torre(linha,coluna,movimento+1);
    } 
}

// Função Movimentação Rainha
void Movimentacao_Rainha(int linha,int coluna,int movimento){
    if(movimento > 8){
        printf("Posição Final - Rainha (Linha: %d, Coluna: %d).\n",linha,coluna);
        printf("\n-----------------------------------------------\n");
        return;

    } else if( coluna > -8 && coluna < 9){
        for (int i = 1; i > 0 && i < 6;i++){
            coluna--;
            printf("%dª Casa: Esqueda ←: Posição (Linha:%d , Coluna: %d)\n",movimento,linha,coluna);
            break;
        }
        Movimentacao_Rainha(linha,coluna,movimento+1);
    } 
}

// Função Movimentação Cavalo
void Movimentacao_Cavalo(int linha, int coluna, int movimento){
    if (movimento > 2){
        coluna++;
        printf("%dª Movimento - Direita → ( Coluna: %d, Linha: %d)\n",movimento,coluna,linha);
        return;

    } else if (linha >-3){
        for (int i = 1; i > 0 && movimento < 3; i++){
            linha--;
            printf("%dª Movimento - Cima ↑ (Coluna: %d, Linha: %d)\n",movimento,coluna,linha);
            break;
        }
        Movimentacao_Cavalo(linha,coluna,movimento+1);
    }
}

int main() {
    printf("Movimentação Peça de Xadrez!\n");

    // Implementação de Movimentação do Bispo - Movimentação: 5 casas na diagonal superior direita
    int Lin_Ini_Bispo = 1;
    int Col_Ini_Bispo = 1;
    int Num_Mov_Bispo = 1;
    
    printf("\nPeça Bispo");
    printf("\nMovimento - 5 Casa para diagonal Superior Direita.\n");
    printf("\nPosicição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini_Bispo,Col_Ini_Bispo);
    
    Movimentacao_Bispo(Lin_Ini_Bispo,Col_Ini_Bispo,Num_Mov_Bispo);

    // Implementação de Movimentação da Torre - Movimentação: 5 casas para a direita    
    int Lin_Ini_Torre = 1;
    int Col_Ini_Torre = 1;
    int Num_Mov_Torre = 1;
    
    printf("\nPeça Torre.");
    printf("\nMovimento: 5 Casas para Direita\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini_Torre,Col_Ini_Torre);

    Movimentacao_Torre(Lin_Ini_Torre,Col_Ini_Torre,Num_Mov_Torre);

    // Implementação de Movimentação da Rainha - Movimentação: 8 casas para a esquerda
    int Lin_Ini_Rainha = 1;
    int Col_Ini_Rainha = 1;
    int Num_Mov_Rainha = 1;
    printf("\nPeça Rainha.");
    printf("\nMovimento: 8 Casas para Esquerda\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini_Rainha,Col_Ini_Rainha);

    Movimentacao_Rainha(Lin_Ini_Rainha,Col_Ini_Rainha,Num_Mov_Rainha);

    // Implementação Movimentação do Cavalo - 2 Casas Para baixo e 1 para esquerda.
    int Lin_Ini_Cavalo = 1;
    int Col_Ini_Cavalo = 1;
    int Num_Mov_Cavalo = 1;

    printf("\nPeça Cavalo.\n"); 
    printf("Movimento: 2 Casas Cima e 1 casa para Direita\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini_Cavalo,Col_Ini_Cavalo);

    Movimentacao_Cavalo(Lin_Ini_Cavalo,Col_Ini_Cavalo,Num_Mov_Cavalo);

    return 0;
}
