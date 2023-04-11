#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverse[100];
    int length, i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = str[i];
    }
    reverse[j] = '\0';
    printf("Reverse of the string is: %s", reverse);
    return 0;
}

/*

enter string aidni

reverse string india

*/
