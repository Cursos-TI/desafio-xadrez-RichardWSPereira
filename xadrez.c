#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
/*
    Utiliza-se a recursividade para simplificar o código dentro do main
    Dito oisto, colocamos o comando que queremos executar quando a recursidade for chamada dentro do main. 
    O que neste caso foi os movimentos da torre, bispo e cavalo 
    Dessa forma, devemos colocar o void mais o nome da recursidade usado dentro do main, e entre parenteses declarar
    a variável que servirá somente dentro da recursividade, dessa forma, colocamos um comando de acrescimo nesta variável para que o printf
    se repita até atingir o valor especificado na estrutura de condição incluida nesta recursidade
*/

void recursidadetorre (int casatorre) {
        if (casatorre < 6) {
            printf("Torre - %dº movimento: ",casatorre);
            printf("Direita \n");
            recursidadetorre(casatorre + 1);
        }
}

/* 
    Nesta recursidade utilizamos o recurso do loop aninhado, assim, demonstrando o movimento duplo vertical e horizontal do bispo
    No loop aninhado colocamos um do-while dentro do while, sendo executado 5 vezes, ou seja, são 5 movimentos
    No loop interno destinado para o movimento horizontal, coloca-se declara a variável como 1, e condiciona o loop a execução uma vez
    colocando a condição que o loop só pode repetir se for diferente de 1, o que não vai acontecer a não ser que mude o valor da variável no código
*/

void recursidadebispo (int casabispo) {
            while (casabispo < 6) {
                int bispo = 1;
                printf("Bispo - %dº movimento: ",casabispo);
                printf("Cima, ");
                do {
                    printf("Direita \n");
                } while (bispo != 1);
                casabispo++;
            }
}

void recursidaderainha (int casarainha) {
        if (casarainha < 9) {
            printf("Rainha - %dº movimento: ",casarainha);
            printf("Esquerda \n");
            recursidaderainha(casarainha + 1);
        }
}


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
    


    recursidadetorre(1);
    printf("\n");

    recursidadebispo(1);
    printf("\n");

    recursidaderainha(1);
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
     No entanto, utilizamos o primeiro loop com múltiplas variáveios, no caso, declaramos a variável utilizada no loop interno dentro do primeiro loop 
     E utilizando para fiz de didática, colocamos uma condição break dentro do loop externo, fazendo que quando a variável tiver o descrescimo de 1 unidade
     o loop será encerrado
    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    for (int cavalo = 2, cavalo2 = 0; cavalo > 0; cavalo--) {
        if (cavalo == 1) break;
        do {
            printf("Cima \n");
            cavalo2++;
        } while (cavalo2 < 2);        
        printf("Direita\n");
        printf("\n");
    } 
    

   

    

    

    return 0;
}
