#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    printf("%p %p\n",arr,&arr[0]);//it will give the address
    printf("%d %d\n",*arr,arr[1]);//*arr will be 10 & arr[0]will be 20
    printf("%d %d\n",*(arr+2),arr[3]);
    return 0;
}
/*
OUTPUTS=
0x7fff5d3297f0 0x7fff5d3297f0
10 20
30 40
*/
