#include <stdio.h>

int main()
{
    int arr[50], size, value;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }

    printf("New array is as follows:\n|");
    for (int i = 0; i < size; i++)
    {
        printf("%5d |", arr[i]);
    }
    printf("\n");

    return 0;
}
