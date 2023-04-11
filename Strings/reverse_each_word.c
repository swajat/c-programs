/*Q-reverse each word withought reverseing the characters*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[100];
    int i, j, k, len;
    printf("Entear a string: ");
    scanf("%s",str);
    len = strlen(str);
    i = 0;
    while (i < len)
    {
        j = 0;
        while (i < len && str[i] != ' ')
        {
            word[j] = str[i];
            j++;
            i++;
        }
        word[j] = '\0';
        for (k = j - 1; k >= 0; k--)
        {
            printf("%c", word[k]);
        }
        printf(" ");
        i++;
    }
    return 0;
}

/*

enter a string aidni

india
*/
