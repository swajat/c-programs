//if a<b then it will swap else addition


#include<stdio.h>

int main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
if(a<b)
{
a=a+b;
b=a-b;
a=a-b;
printf("number will be %d%d",a,b);
}
else
{
c=a+b;
printf("sum=%d",c);
}
return 0;
}
 

