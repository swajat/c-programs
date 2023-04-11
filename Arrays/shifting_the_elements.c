#include <stdio.h>

int main() {
   int n, i, pos, x;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int array[n+1];

   printf("Enter %d elements of the array:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }

   printf("Enter the position where you want to insert an element: ");
   scanf("%d", &pos);

   printf("Enter the element to be inserted: ");
   scanf("%d", &x);

 
   for (i = n-1; i >= pos-1; i--) {
      array[i+1] = array[i];
   }

   // Inserting the element at the given position
   array[pos-1] = x;

   printf("The array after insertion is:\n");
   for (i = 0; i <= n; i++) {
      printf("%d ", array[i]);
   }

   printf("\n");

   return 0;
}

/*
enter the size of the array 4
enter the elements of the array
1234
enter the position you want to insert an elements 3
enter the elements 87
1 2 87 3 4 







*/
