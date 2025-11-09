#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input from user between 1 and 8.
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // For each row
    for (int row = 0; row < h; row++)
    {
        int bricks = row + 1;
        int spaces = h - bricks;

        // Left padding spaces
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }
        // Left bricks
        for (int i = 0; i < bricks; i++)
        {
            printf("#");
        }

        // Gap of two spaces
        printf("  ");

        // Right bricks
        for (int i = 0; i < bricks; i++)
        {
            printf("#");
        }

        printf("\n");
    }
}
