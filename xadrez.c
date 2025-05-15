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

    /*
        Para realizar este jogo declara-se as variáveis torre, bispo e rainha como int, às quais terão seus valores inicialmente como 1 
        Após a execução das estruturas de repetição while, do while e for, estas variáveis terão seus valores acrescidos 1 unidade a cada loop
        E a cada loop será identificado 1 movimento da peça, impresso usando o comando printf especificando a posição do movimento 
    */

    int torre = 1;
    int bispo = 1;

    while (torre <= 5) {
        printf("Torre - %dº movimento: ",torre);
        printf("Direita \n");
        torre++;
    }
    printf("\n");

    do {
        printf("Bispo - %dº movimento: ",bispo);
        printf("Cima, Direita \n");
        bispo++;
    } while (bispo<=5);
    printf("\n");

    for (int rainha = 1; rainha <= 8; rainha++) {
        printf("Rainha - %dº movimento: ",rainha);
        printf("Esquerda \n");
    }
    printf("\n");

     // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    /*
     Com o movimento do cavalo teve que usar loops aninhados, pois o cavalo movimento duas vezes para o mesmo lugar e depois da uma direção diferente, formando um L 
     Assim, utliza-se o for para destinar o primeiro loop sendo o movimento único fechando o L do movimento
     Dentro do primeiro loop temos o segundo que descreve os primeiros movimento do cavalo para a mesma direção
     Nesta estrutura, o primeiro loop teve como condição a variável cavalo ser positiva, sendo que foi declarado inicialmente como 1, tendo decrescido 1 unidade ficou zero, o que configurou apenas um movimento
     Já o segundo loop foi utilizado o do while, sendo repetido duas vezes antes de ir para o primeiro loop, descrevendo os primeiros movimentos do cavalo
     Neste segundo loop utilizou a variavel com ganho de uma unidade, sendo declarada como zero e limitada para o loop enquanto seja menor que 2, assim, tivemos dois movimentos seguidos do cavalo para a mesma direção
     
    
    */

    for (int cavalo = 1; cavalo > 0; cavalo--) {
        int cavalo2 = 0;
        do {
            printf("Baixo \n");
            cavalo2++;
        } while (cavalo2 < 2);
        printf("Esquerda\n");
        printf("\n");
    } 
    

   

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
