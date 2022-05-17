#include <stdio.h>
int sum_of_digits_integer(int number)
{
    int sum = 0, rem = 0;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
    }
    return sum;
}
int main()
{
    int number = 1234;
    printf("%d\n", sum_of_digits_integer(number));
    return 0;
}