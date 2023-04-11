#include <stdio.h>
#include <string.h>

int main()
{
    char g[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s",g);
    for (i = 0; g[i] != '\0'; i++)
    {
        if (g[i] == 'a' || g[i] == 'e' || g[i] == 'i' || g[i] == 'o' || g[i] == 'u' ||
            g[i] == 'A' || g[i] == 'E' || g[i] == 'I' || g[i] == 'O' || g[i] == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels in the string: %d", count);
    return 0;
}
/
*
enter a string
dwkjhieo
number of vowel in string 
3
*/
