#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // loop inicial
    do
    {
        n = get_int("Height: ");
    } while (n < 1);

    // loop para imprimir a pirâmide
    for (int row = 0; row < n; row++)
    {

        // loop para imprimir a primeira metade da pirâmide
        for (int column = 0; column < n; column++)
        {
            if (column < n - row - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("  "); // espaço entre as duas metades da pirâmide

        // loop para imprimir a segunda metade da pirâmide
        for (int column = 0; column < n; column++)
        {
            if (column <= row)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
