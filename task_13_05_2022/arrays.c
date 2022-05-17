#include <stdio.h>
#include <stdbool.h>
void array_print(int array[], int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
}
int find_index(int array[], int size, int element)
{
    int index;
    for (int i = 0; i < size; i++)
    {
        if (element == array[i])
            index = i;
    }
    return index;
}
int find_index_range(int array[], int size, int from, int until, int element)
{
    int index;
    for (int i = 0; i < size; i++)
    {
        if (until > array[i] && from < array[i])
        {
            if (element == array[i])
            {
                index = i;
            }
            else
                return 0;
        }
    }
    return index;
}
int max_array_number(int array[], int length)
{
    int maximum = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    return maximum;
}
int min_array_number(int array[], int length)
{
    int minimum;
    for (int i = 0; i < length; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    return minimum;
}
float mean(int array[], int length)
{
    float sum = 0, mean;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    mean = sum / length;
    return mean;
}
void reverse(int *array, int array_size)
{
    int *first = array;
    int *last = array + array_size - 1;
    while (first < last)
    {
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}
bool prime(int array[], int len)
{
    int num, i, j;
    if (array == NULL || len == 0)
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
bool sorting(int array[], int length)
{
    if (array == NULL || length == 0)
        return false;
    int i, j, temp;
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return true;
}
int fib(int array[], int len)
{
    int first_num = array[0];
    int second_num = array[1];
    int fibanocci_num;
    for (int i = 2; i < len; i++)
    {
        fibanocci_num = first_num + second_num;
        first_num = second_num;
        second_num = fibanocci_num;
    }
    return fibanocci_num;
}
int main()
{
    int array[] = {1, 2, 4, 6, 8, 9};
    int length = sizeof(array) / sizeof(int);
    printf("The maximum number in an given array is:%d\n", max_array_number(array, length));
    printf("The minimum number in an given array is:%d\n", min_array_number(array, length));
    printf("The index of given elemet in a given range is:%d", find_index_range(array, length, 2, 9, 5));
    return 0;
}