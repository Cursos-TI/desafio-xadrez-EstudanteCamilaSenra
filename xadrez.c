#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Correção de problemas de acentuação e caracteres especiais.
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    // Move-se cinco casas na diagonal para cima e à direita. 
    int bispo = 1;

    while(bispo <=5){
        printf("Bispo se move para cima e direita!\n");
        bispo ++;
    }

    // Implementação de Movimentação da Torre
    // Move-se em linha reta horizontalmente cinco casas para a direita.
    int torre = 1;
    do {
        printf("Torre se move para a direita!\n");
        torre ++;
    } while (torre <= 5);

    // Implementação de Movimentação da Rainha
    // Move-se oito casas para a esquerda.
    int rainha;
    for(rainha = 1; rainha <=8; rainha ++){
        printf("Rainha se move para a esquerda!\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
