/*
2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

#include <stdio.h>

int main(){
    int n,i;
    int arr[n];
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    
    printf("Input %d number of elements in the array :",n);
    for(i=1;i<=n;i++){
        printf("element :- %d  ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=n;i>0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}