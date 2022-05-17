#include <stdio.h>
#include <stdbool.h>
bool is_prime(int number)
{
    int i;
    if (number == 0)
        return false;
    else
    {
        for (i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
                break;
        }
        if (i > number / 2)
            return true;
    }
}
bool is_even(int number)
{
    if (number % 2 == 0)
        return true;
    else
        return false;
}
bool is_odd(int number)
{
    if (number % 2 != 0)
        return true;
    else
        return false;
}
bool is_positive(int number)
{
    if (number >= 0)
        return true;
    else
        return false;
}
bool is_negative(int number)
{
    if (number < 0)
        return true;
    else
        return false;
}
int main()
{
    int number = -2;
    printf("%d", is_negative(number));
    return 0;
}