//reading 10 elements of an array
#include <stdio.h>

int main() {
    int elem[10];
    int i;

    // read values into array
    for (i = 0; i < 10; i++) {
        printf("Enter value for elem %d: ", i);
        scanf("%d", &elem[i]);
    }

    // print values in array
    for (i = 0; i < 10; i++) {
        printf("arr %d = %d\n", i, elem[i]);
    }

    return 0;
}
/*
1
2
3
4
5
6
7
8
9
0
*/
