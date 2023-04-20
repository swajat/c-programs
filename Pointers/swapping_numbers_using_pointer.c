#include<stdio.h>
int main()
{
      int a,b;
      int *p,*q;
      printf("enter the numbers");
      scanf("%d %d",&a,&b);
      p=&a;
      q=&b;
        
        
        *p=*p^*q;
        *q=*p^*q;
        *p=*p^*q;
        
        printf("after swap  %d %d",*p,*q);
        return 0;
        
}

/*
OUTPUTS=
ENTER THE NUMBERS
10 12
AFTER SWAP
12 10


*/
