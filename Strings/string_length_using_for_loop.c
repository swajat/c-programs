#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length of the string is: %d", length);
    return 0;
}

/*
enter a string
gyana
length of the string is 5


*/
