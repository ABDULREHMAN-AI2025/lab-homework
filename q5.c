#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 6, 7, 4, -2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {6, 3, 4, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mearged[size1 + size2];
    int k = 0;
    for (int i = 0; i < size1; i++)
    {
        mearged[k] = arr1[i];
        k++;
    }
    for (int j = 0; j < size2; j++)
    {
        mearged[k] = arr2[j];
        k++;
    }
    printf("MERGED ARRAY ARE  \n ");

    printf("|");

    for (int i = 0; i < k; i++)
    {
        printf("%3d|", mearged[i]);
    }
    return 0;
}