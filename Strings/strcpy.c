#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter a string: ");
    //fgets(str1,100,stdin);
    scanf("%s",str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string is: %s", str2);
    return 0;
}
/*

enter  a string india

copied string is india

*/
