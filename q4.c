#include <stdio.h>

int main()
{
    int arr[100];
    int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    printf("Enter the array enter -1 to break \n ");

    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == -1)
        {
            break;
        }
    }
    printf("|");

    for (int j = 0; j < i; j++)
    {
        printf("%5d|", arr[j]);
    }
    // swapping logic
    for (int j = 0; j < i/2; j++)
    {
        int temp;
        temp = arr[j];
        arr[j] = arr[i - j - 1];
        arr[i - j - 1] = temp;
    }
    printf("\n ARRAY AFTER REVERSE \n ");
    printf("|");
    for (int j = 0; j < i; j++)
    {
        printf("%5d|", arr[j]);
    }

    return 0;
}