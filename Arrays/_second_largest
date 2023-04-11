#include <stdio.h>

int main() {
   int n, i, largest, second_largest;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int array[n];
   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }

   if (array[0] > array[1]) {
      largest = array[0];
      second_largest = array[1];
   } else 

   for (i = 2; i < n; i++) {{
      largest = array[1];
      second_largest = array[0];
   }
      if (array[i] > largest) {
         second_largest = largest;
         largest = array[i];
      } else if (array[i] > second_largest && array[i] != largest) {
         second_largest = array[i];
      }
   }

   printf("The second largest element is: %d\n", second_largest);

   return 0;
}

/*


enter the size of the array 4

enter the elements
1
5
8
9
the second largest number is 8


*/
