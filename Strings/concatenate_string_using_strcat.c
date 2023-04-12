#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    printf("enter the strings ");
    scanf("%s %s",str1,str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
/*
enter the strings  mempaage
tech
o/p(mempagetech)

*/
