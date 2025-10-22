#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n ", size);
    int temp = arr[size - 1];

    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int j = 0; j < size; j++)
    {
        printf("%5d", arr[j]);
    }
    return 0;
}