#include <cs50.h>
#include <stdio.h>

int h;

void check_input(void);

int main(void)
{
    check_input();

    for (int i = 0; i < h; i++)
    {

        for (int j = h - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int t = 0; t <= i; t++)
        {
            printf("#");
        }
        printf("  ");
        for (int p = 0; p <= i; p++)
        {
            printf("#");
        }
        printf("\n");
    };
};

void check_input(void)
{
    do
    {
        h = get_int("Enter a number between 1 and 8\n");
    } 
    while (h < 1 || h > 8);
};
