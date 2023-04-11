#include<stdio.h>
#include<string.h>
int main()
{
    char g1[40];
    char g2[40];
    
    printf("enter the string :");
    scanf("%s",g1);
    strcpy(g2,g1);
    printf("copied string is %s",g2);
    return 0;
    
    
    
}
/*
enter the string hehiuh

copied string hehiuh
*/
