#include <stdio.h>
void range(int array[], int length, int min, int max)
{
    for (int index = 0, val = min; index < length && val < max; index++, val++)
    {
        array[index] = val;
        printf("%d ", array[index]);
    }
}
void step_range(int array[], int length, int min, int max, int step)
{
    for (int index = 0, val = min; index < length && val < max; index++, val+=step)
    {
        array[index] = val;
        printf("%d ", array[index]);
    }
}
int occurences_of_number(int number, int element)
{
    int count = 0, rem = 0;
    while (number)
    {
        rem = number % 10;
        if (rem == element)
        {
            count++;
        }
        number = number / 10;
    }
    return count;
}
int positive_count_array(int array[], int size)
{
    int positive_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 0)
        {
            positive_count++;
        }
    }
    return positive_count;
}
int negative_count_array(int array[], int size)
{
    int negative_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= 0)
        {
            negative_count++;
        }
    }
    return negative_count;
}

int main()
{
    int array[50];
    int length = sizeof(array) / sizeof(int);
    int number = 9786399;
    range(array, length, 2, 9);
    printf("\n");
    // step_range(array, length, 2, 9, 2);
    printf("The occurence count is:%d\n", occurences_of_number(number, 9));
    return 0;
}