#include <stdio.h>
#include <stdbool.h>
int factors_array[50], factor_count = 0;
bool factors(int *array, int array_size)
{
    if (*array == '\0' || array_size == '\0')
        return false;
    else
    {
        int number, count;
        for (int i = 0; i < array_size; i++)
        {
            number = array[i];
            for (count = 1; count <= number; count++)
            {
                if (number % count == 0)
                {
                    factors_array[factor_count] = count;
                    factor_count++;
                }
            }
        }
        return true;
    }
}
void array_print()
{
    printf("factors count:%d\n", factor_count);
    printf("[");
    for (int i = 0; i < factor_count; i++)
    {
        printf("%d ", factors_array[i]);
    }
    printf("]");
    printf("\n");
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int array_size = sizeof(array) / sizeof(int);
    bool val = factors(array, array_size);
    array_print();
}
