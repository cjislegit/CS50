#include <cs50.h>
#include <stdio.h>

long c_num;
int num_length;
void get_card_num(void);
void calc_checksum(void);

int main(void)
{
    get_card_num();
    calc_checksum();
}

//Promt for input
void get_card_num(void)
{
    c_num = get_long("Number: ");
}

//Calculate checksum
void calc_checksum(void)
{
    long nums = c_num;
    while (nums > 0)
    {
        nums = nums / 10;
        num_length++;
    }

    if (num_length < 13)
    {
        printf("INVALID");
    }

    nums = c_num;
    int other_digit[num_length];
    for (int i = 0; i < num_length; i++)
    {
        other_digit[i] = nums % 10;
        nums = nums / 10;
    }
    for (int i = 1; i < num_length; i += 2)
    {
        if ((other_digit[i] * 2) / 10 < 1)
        {
            other_digit[i] = other_digit[i] * 2;
        }
        else
        {
            other_digit[i] = ((other_digit[i] * 2) / 10) + ((other_digit[i] * 2) % 10);
        }
    }

    int total = 0;
    for (int i = 0; i < num_length; i++)
    {
        total += other_digit[i];
    }

    if (total % 10 == 0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
//Check for card length and starting digits

//Print Amex, MasterCard, Visa or Invalid
