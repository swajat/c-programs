/* Q:-sum of string length ill be even then print AN at middle

else print A
*/


#include<stdio.h>
int main()
{
    char name[30];
    int i,middle;
    printf("enter the name: ");
    scanf("%s",name);
    printf("%s",name);
    i=0;
    while(name[i]!='\0')
    {
    
    i++;
    }
    printf("length of the string is :%d\n",i);
    
    middle=i/2;
    
    if (middle%2==0)
    {
    name[middle]='A' ;
    name[middle+1]='N';
    
    }
    else
    {
    name[middle]='H';
    }
    printf("%s",name);
    return 0;
}
/*
enter the name gyel
length of the string is 4
o/p
gyAN

if i type abc then its length will be 3 so 
aHc
*/

