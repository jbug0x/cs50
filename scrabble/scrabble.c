#include <stdio.h>
#include <ctype.h>
#include <cs50.h>


int main(void)
{
    // Inicializando as pontuações dos jogadores
    int score_1 = 0;
    int score_2 = 0;

    // Inicializando os arrays de letras e pontos
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    char points[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

    // Solicitando os nomes dos jogadores
    string player_1 = get_string("Player 1: ");
    string player_2 = get_string("Player 2: ");

    // Verificando a pontuação do jogador 1
    for (int i = 0; player_1[i] != '\0'; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            // Comparando a letra do jogador 1 com as letras do array
            if (tolower(player_1[i]) == letters[j])
            {
                score_1 += points[j];
            }
        }
    }

    // Verificando a pontuação do jogador 2
    for (int i = 0; player_2[i] != '\0'; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            // Comparando a letra do jogador 2 com as letras do array
            if (tolower(player_2[i]) == letters[j])
            {
                score_2 += points[j];
            }
        }
    }

    // Comparando as pontuações dos jogadores
    if (score_1 > score_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score_2 > score_1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
