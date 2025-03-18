#include <stdio.h>

int main() {
    //declaração de variáveis e menu inicial do programa
    int opcao, opcao2, b = 0, r = 0;
    printf("Bem vindo ao xadrez!\n");
    printf("O que vamos fazer?\n");
    printf("1. Movimentar peças\n");
    printf("2. Ver regras\n");
    scanf("%d", &opcao);

    //inicio switch do menu interativo
    switch (opcao)
    {
    case 1: //inicio da movimentação de peças
        printf("A princípio, temos 3 peças para movimentar:\n");
        printf("1. Torre (para a direita); 2. Bispo (para cima e para a direita); 3. Rainha(para a esquerda)\n");
        printf("Escolha qual peça movimentar:\n");
        scanf("%d", &opcao2);
        //switch para movimentação de peças
        switch (opcao2)
        {
        case 1:
        //movimentação da torre
            for (int i = 0; i < 5; i++)
            {
                printf("Direita\n");
            }
        //fim movimentação da torre
            break;
        
        case 2:
        //movimentação do bispo
        while (b < 5)
        {
            printf("Cima direita\n");
            b++;
        }
        //fim da movimentação do bispo
        break;
        
        //movimentação da rainha
        case 3:
            do
            {
                printf("para a esquerda\n");
                r++;
            } while (r < 5);
        //fim da movimentação da rainha
            
        default:
            break;
        }
        break;
        //fim do switch de movimentação de peças
    
    //visualização das regras do xadrez
    case 2:
    printf("O xadrez é um jogo de estratégia jogado entre dois jogadores em um tabuleiro de 64 casas.\n");
    printf("Cada jogador começa com 16 peças, sendo elas:\n");
    printf("1 Rei, 1 Rainha, 2 Torres, 2 Bispos, 2 Cavalos e 8 Peões\n");
    printf("O jogo acaba quando o rei está sob ataque e não consegue escapar, ou por empate:\n");
    printf("Afogamento do rei: nenhum movimento possível, mas não tem xeque;\n");
    printf("Repetição de jogadas 3 vezes;\n");
    printf("Se 50 movimentos forem feitos sem captura ou movimento de peão;\n");
    printf("Se nenhum dos jogadores pode dar xeque-mate.\n");
    break;

    default:
        break;
    //fim do switch do menu interativo
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
