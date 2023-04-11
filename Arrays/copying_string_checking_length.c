#include<stdio.h>
#include<string.h>
int main()
{
    int length=0,i,c=0;
    char g1[20]="gyana";
    char g2[20];
    printf("%s \n",g1);
    strcpy(g2,g1);
    printf("%s\n",g2);
    while(g2[length]!='\0')
    length++;
    printf("the length of the string is %d ",length);
    
   if(length%2==0)
    {
       printf("we did it");
    
    }
    else
    
    scanf("%s",g2);
for(int i=length-1;i>0;i--)
{
    printf("%c",g2[i]);
}

    return 0;
    
    
}
/*

gyan

gyan

lenth of the string is 4
*/
