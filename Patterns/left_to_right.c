#include <stdio.h>

int main()
{
int i,j,rows;
printf("enter the num of rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=rows;j++)
    {
        if((i+j)<=rows)
        printf(" ");
        else
        printf("G");
    }
    printf("\n");
}
    return 0;
}

    
*/
  
  INPUT (5)
       G
      GG
     GGG
   GGGGG
  GGGGGG
  
  /*
