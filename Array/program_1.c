/* 1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9 */


  
#include <stdio.h>

int main() {
   int arr[10], i, j;
   printf("Enter the array elements\n");

   for (i = 0; i < 10; i++) {
      printf("Array element %d: ", i+1);
      scanf("%d", &arr[i]);
   }

   printf("Array elements:\n");
   for (j = 0; j < 10; j++) {
      printf("%d ", arr[j]);
   }
   printf("\n");

   return 0;
}
