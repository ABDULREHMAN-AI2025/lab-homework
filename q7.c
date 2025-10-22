#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[50];
    int vowel = 0, consonent = 0;
    printf("Enter a word : \n ");
    fgets(word, sizeof(word), stdin);
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        char ch = tolower(word[i]);
        if (ch  >= 'a' && ch <= 'z')
        {

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonent++;
            }
        }
    }
    printf(" %d \n", vowel);
    printf(" %d \n", consonent);

    return 0;
}