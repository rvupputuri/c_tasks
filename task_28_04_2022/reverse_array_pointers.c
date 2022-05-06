#include <stdio.h>
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
void array_print(int *array, int array_size)
{
    printf("[");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", *array++);
    }
    printf("]");
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pointer = array;
    int array_size = sizeof(array) / sizeof(int);
    printf("The oiginal array is:\n");

    array_print(array, array_size);

    reverse(array, array_size);

    printf("\n");

    printf("The reversed array is:\n");

    array_print(array, array_size);

    printf("\n");
    return 0;
}