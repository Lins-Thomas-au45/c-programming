/*
6. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
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
        int IsUnique = 1;
        for(j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                IsUnique = 0;
                break;
            }
        }
        if (IsUnique){
            printf("%d",arr[i]);
        }
    }
    

    return 0;
  }