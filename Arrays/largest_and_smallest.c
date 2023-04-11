#include <stdio.h>

int main() {
   int array[] = {5, 2, 9, 1, 7, 4};
   int n = sizeof(array) / sizeof(array[0]);
   int i, largest, smallest;

   // Find the largest and smallest numbers in the array using a for loop
   largest = array[0];
   smallest = array[0];
   for (i = 1; i < n; i++) {
      if (array[i] > largest) {
         largest = array[i];
      }
      if (array[i] < smallest) {
         smallest = array[i];
      }
   }

   // Print the largest and smallest numbers
   printf("Largest number = %d\n", largest);
   printf("Smallest number = %d\n", smallest);

   return 0;
}

/*
largest number 9

smallest number 1

*/
