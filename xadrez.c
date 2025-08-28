#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo

void Movimentacao_Bispo(int linha, int coluna, int movimento) {
    if (movimento > 5) {
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


int main() {
    printf("Movimentação Peça de Xadrez!\n"); //

    int Lin_Ini = 1;
    int Col_Ini = 1;
    int Num_Mov = 1;
    // Implementação de Movimentação do Bispo - Movimentação: 5 casas na diagonal superior direita
    printf("\nPeça Bispo");
    printf("\nMovimento - 5 Casa para diagonal Superior Direita.\n");
    printf("\nPosicição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini,Col_Ini);
    
    Movimentacao_Bispo(Lin_Ini,Col_Ini,Num_Mov);

    /*
    int Casa_Bispo = 1;
    
     Realiza a movimentação da Peça
    while (Casa_Bispo < 6){ 

        Casa_Bispo++;
        int Casa_atual = Casa_Bispo - 1; // Variavel auxiliar para exibição da casa atual que a peça se encontra

        printf("%dª Casa: Cima ↑, Direita →: Posição (Linha: %d, Coluna: %d)\n",Casa_atual,Casa_Bispo,Casa_Bispo);
        
    } */
    //printf("Posição Final - Bispo (Linha: 6, Coluna: 6)\n");//,Casa_Bispo,Casa_Bispo);

    printf("\n-----------------------------------------------\n");
    // Implementação de Movimentação da Torre - Movimentação: 5 casas para a direita
    printf("\nPeça Torre.");
    printf("\nMovimento: 5 Casas para Direita\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini,Col_Ini);

    int Casa_Torre = 1;
    int Coluna_torre = 1;
    int Mov_Torre = 1;
    
    do // Realiza a movimentação da Peça
    {
        Casa_Torre++;
        printf("%dª Casa: Direita →: Posição (Linha:%d , Coluna: %d)\n",Mov_Torre,Coluna_torre,Casa_Torre);
        Mov_Torre++;

    } while (Casa_Torre < 6);

    printf("Posição Final - Torre (Linha: %d, Coluna: %d).\n",Coluna_torre,Casa_Torre);

    printf("\n-----------------------------------------------\n");

    // Implementação de Movimentação da Rainha - Movimentação: 8 casas para a esquerda
    printf("\nPeça Rainha.");
    printf("\nMovimento: 8 Casas para Esquerda\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini,Col_Ini);

    int aux = 0; // Variavel auxiliar para exibição da Posição final conforme movimentação realizada.
    int cont_rainha = 1;

    // Realiza a movimentação da Peça
    for (int Casa_Rainha = 1; Casa_Rainha < 9; Casa_Rainha++){ 

        aux = Casa_Rainha - 1;
        
        if(aux == 0){
            printf("%dª Casa: Esquerda ←: Posição (Linha: %d, Coluna: %d)\n",Casa_Rainha,cont_rainha,aux);
        } else {
            printf("%dª Casa: Esquerda ←: Posição (Linha: %d, Coluna: -%d)\n",Casa_Rainha,cont_rainha,aux);
        }
        
    }

    printf("Posição Final - Rainha (Linha: %d, Coluna: -%d)\n",cont_rainha,aux);
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n-----------------------------------------------\n");

    // Implementação Movimentação do Cavalo - 2 Casas Para baixo e 1 para esquerda.
    printf("\nPeça Cavalo.\n"); 
    printf("Movimento: 2 Casas baixo e 1 casa para Esquerda\n");
    printf("\nPosição Inicial (Linha: %d, Coluna: %d)\n",Lin_Ini,Col_Ini);

    int linha = 1;
    int Coluna;
    int Casa_Esquerda;
    int Cont_Movimento = 1;
    
    // Loop que verifica a coluna do Cavalo
    for (Coluna = 1; Coluna <= 1 ; Coluna++){
        do // Loop que verifica a linha da peça 
        {
            linha++;
            printf("%dª Movimento - Baixo ↓ (Linha: %d, Coluna: %d)\n",Cont_Movimento,linha,Coluna);
            Cont_Movimento++;
        } while (linha < 3);
        Casa_Esquerda = Coluna -1;

        printf("%dª Movimento - Esquerda ← ( Linha: %d, Coluna: %d)\n",Cont_Movimento,linha,Casa_Esquerda);
    }
    
    /* Explicação Nivel Mestre e O que deve ser feito
        Nível Mestre - Funções Recursivas e Loops Aninhados
        Sugestão: Substitua as movimentações das peças por funções recursivas.
        Exemplo: Crie uma função recursiva para o movimento do Bispo.
        O que você vai fazer

        Você deverá modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:
        Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
        Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
                
        Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
        Inclua o uso de continue e break dentro dos loops.
    */
    return 0;
}
