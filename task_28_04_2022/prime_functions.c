#include <stdio.h>
#include <stdbool.h>
bool prime(int *array, int len)
{
    int num, i, j;
    if (*array == '\0' || len == 0)
        return false;
    else
    {
        for (i = 0; i < len; i++)
        {
            num = array[i];

            for (j = 2; j <= num / 2; j++)
            {
                if (num % j == 0)
                    break;
            }
            if (j > num / 2)
                printf("%d ", num);
        }
        printf("\n");
        return true;
    }
}
int main()
{
    int min = 2, max = 20, i, j, num;
    int len = max - min;
    int array[len];
    int prime_len;
    int prime_array[prime_len];
    printf("initialising array from %d to %d:\n ", min, max);

    for (int index = 0, val = min; index < len && val < max; index++, val++)
    {
        array[index] = val;
        printf("%d ", array[index]);
    }
    printf("\n");
    printf("The prime numbers present in an array:\n");
    prime(array, len);
    printf("\n");
    return 0;
}