#include <stdio.h>

int main()
{
    char arr1[] = "cooder";
    char arr2[] = "coodar";
    int mismatch = 0;
    for (int i = 0;arr1[i]!='\0'&&arr2[i]!='\0'; i++)
    {
        if (arr1[i] != arr2[i])
        {
            mismatch = 1;
            printf("Mismatch Found at index %d\n ", i);
            break;
        }
    }
    if (mismatch == 0)
    {
        printf("NO Mismatch Found \n ");
    }

    return 0;
}