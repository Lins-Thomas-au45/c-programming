/*
5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

#include <stdio.h>
  int main(){

    int size,i,j,count=0;
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
    }
    printf(" count :%d ",count);

    return 0;
  }
