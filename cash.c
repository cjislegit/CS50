#include <cs50.h>
#include <stdio.h>
#include <math.h>

float c;
void ask_for_Change(void);
int round_change(void);

int main(void)
{
    ask_for_Change();
    int change = round_change();
    int coins = 0;
    int coin_values[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; i++)
    {
        if (change >= coin_values[i])
        {
            do
            {
                change -= coin_values[i];
                coins++;
            } while (change >= coin_values[i]);
        }
    }

    printf("%i", coins);
}

void ask_for_Change(void)
{
    do
    {
        c = get_float("Change owed: ");
    } while (c <= 0);
}

int round_change(void)
{
    return round(c * 100);
}
