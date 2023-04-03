
//string compair

#include <stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
printf("enter first string\n");
scanf("%s",str1);
printf("enter second string\n");
scanf("%s",str2);
if(strcmp(str1,str2)==0)
printf("both are equal");
else
   printf("both are not equal");
   

    return 0;
}
