#include <stdio.h>

int main()
{
int num,pos;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the position \n");
scanf("%d",&pos);
printf("before number : %d\n",num);
num=num|1<<pos;
printf("after number:%d\n",num);


    return 0;
    }
    /*
    enter the number 10
    enter the position  0
    number will be 11
    */
