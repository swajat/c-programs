#include<stdio.h>
int main()
{
    int arr[20],num,sum,i;
    printf("enter the elements size");
    scanf("%d",&num);
    printf("enter the elements\n");
        for(i=0;i<num;i++)
        {
            scanf("%d",arr+i);
            
        }
        for(i=0;i<num;i++)
        {
            sum=sum+*(arr+i);
            
        }
        printf("sum= %d",sum);
        return 0;
        
}
/*
OUTPITS=
ENTER THE ELEMENTS SIZE 4
ENTER THE ELEMENTS
1
2
3
4
SUM=10
*/
