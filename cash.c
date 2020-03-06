#include <cs50.h>
#include <stdio.h>
#include <math.h>

float c;
void ask_for_Change(void);
int round_change(void);

int main(void)
{
    int num_coins = 0;
    ask_for_Change();
    int coins = round_change();
}

void ask_for_Change(void)
{
    do
    {
        c = get_float("Change owed: ");
    }
    while (c <= 0);
    
}

int round_change(void)
{
    return round(c * 100);
}
