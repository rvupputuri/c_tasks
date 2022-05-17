#include <stdio.h>
float calculate_income_tax(float income)
{
    if (0 <= income && income <= 500000)
        return (income * 0 / 100);
    else if (500000 < income && income <= 1000000)
        return (income * 10 / 100);
    else if (1000000 < income && income <= 2000000)
        return (income * 18 / 100);
    else if (2000000 < income && income <= 3000000)
        return (income * 27 / 100);
    else if (income > 3000000)
        return (income * 35 / 100);
}
int main()
{
    float income = 863278;
    printf("The tax for the %f is:%f\n", income, calculate_income_tax(income));
    return 0;
}