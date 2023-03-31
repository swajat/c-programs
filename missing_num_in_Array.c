//findig missing elements
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Calculate the sum of numbers in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the expected sum of numbers
    int expected_sum = (n + 1) * (n + 2) / 2;

    // Find the missing number
    int missing_number = expected_sum - sum;

    printf("Missing number is %d\n", missing_number);

    return 0;
}

/*
missing number is 4
*/
