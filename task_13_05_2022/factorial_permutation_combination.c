#include <stdio.h>
float factorial(float number)
{
    int factorial = 1;
    for (int i = number; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
float permutations(int n, int r)
{
    return (factorial(n) / factorial(n - r));
}
float combinations(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int main()
{
    float number = 2;
    int n = 5, r = 3;
    printf("The factorial of '%f' is:%f", number, factorial(number));
    printf("\n");
    printf("The permutation is:%f", permutations(n, r));
    printf("\n");
    printf("The combination is:%f", combinations(n, r));
    printf("\n");

    return 0;
}