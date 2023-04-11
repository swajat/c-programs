#include <stdio.h>

int main()
{
    int num, n, newnum;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d",&n);
    newnum = num & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newnum);

    return 0;
}

/*
enter any number   10

enter nth bit to clear   1

number after clearing    8
*/
