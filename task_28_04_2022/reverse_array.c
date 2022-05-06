#include <stdio.h>
#include <stdbool.h>
// reversing the given array
bool reverse(int *array, int array_size)
{
    if (*array == '\0' || array_size == '\0')
        return false;
    else
    {
        int temp;
        for (int i = 0; i < array_size / 2; i++)
        {
            temp = array[i];
            array[i] = array[array_size - i - 1];
            array[array_size - i - 1] = temp;
        }
        return true;
    }
}

// printing the array
void array_print(int *array, int array_size)
{
    printf("[");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_size = sizeof(array) / sizeof(int);
    printf("The oiginal array is:\n");

    array_print(array, array_size);

    reverse(array, array_size);

    printf("\n");

    printf("The reversed array is:\n");

    array_print(array, array_size);

    printf("\n");
}