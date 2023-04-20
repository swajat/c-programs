#include<stdio.h>
int main()
{
    int a[20] ,num,i;
    printf("enter the elements ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",a+i);
        
    }
    
    printf("the given elements are ");
    
            for(i=0;i<num;i++)
            {
            
                printf("%d\n",*(a+i));
                
            }
            return 0;
}


/*
OUTPUT=
enter the elements 4
given elements are
1
2
3
4
OUTPUT=
1
2
3
4
*/
