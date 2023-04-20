
#include<stdio.h>
int main()
{
    int arr[30],i,num,large;
    
    printf("enter the elements");
    scanf("%d",&num);
    
               
               printf("enter the numbers");
               for(i=0;i<num;i++)
               {
                   scanf("%d",arr+i);
                  
               }
        
        for(i=1;i<num;i++)
        {
            if(*(arr+i)>large)
            large=*(arr+i);
            
        }
        printf("largest= %d",large);
        return 0;
        
}
/*
ENTER THE ELEMENTS 4

ENTER THE NUMBERS
1
2
3
4

LARGEST IS
4
*/
