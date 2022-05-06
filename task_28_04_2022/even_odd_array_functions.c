#include <stdio.h>
#include <stdbool.h>
bool even_array(int *array, int len, int max, int min)
{
    if (*array == '\0' || len == 0)
        return false;
    else
    {
        int i, j;
        int even[((len) / 2)], even_len = 0;
        for (i = 0, j = min; i <= len && j <= max; i++, j++)
            array[i] = j;
        for (i = 0; i <= (max - min); i++)
        {
            if (array[i] % 2 == 0)
            {
                even[even_len] = array[i];
                even_len++;
            }
        }
        printf("Even numbers in an Array:\n");
        for (i = 0; i < even_len; i++)
        {
            printf("%d ", even[i]);
        }
        printf("\n");
        return true;
    }
}
bool odd_array(int *array, int len, int max, int min)
{
    if (*array == '\0' || len == 0)
        return false;
    else
    {
        int i, j;
        int odd[((len) / 2)], odd_len = 0;
        for (i = 0, j = min; i <= len && j <= max; i++, j++)
            array[i] = j;
        for (i = 0; i <= (max - min); i++)
        {
            if (array[i] % 2 != 0)
            {
                odd[odd_len] = array[i];
                odd_len++;
            }
        }
        printf("odd numbers in an Array:\n");
        for (i = 0; i < odd_len; i++)
        {
            printf("%d ", odd[i]);
        }
        printf("\n");
        return true;
    }
}
int main()
{
    int min = 2, max = 20, i, j;
    int array[max - min];
    int len = max - min;
    int even[((len) / 2)], odd[((len) / 2)];
    int even_len = 0, odd_len = 0;
    for (i = 0, j = min; i <= (max - min) && j <= max; i++, j++)
        array[i] = j;
    even_array(array, len, max, min);
    odd_array(array, len, max, min);
    return 0;
}
