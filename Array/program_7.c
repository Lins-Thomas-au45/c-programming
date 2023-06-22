/*
7. Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/

#include <stdio.h>

int main()
{

    int i, j, n1, n2,temp;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d", &n1);
    int a[n1];
    printf("Input %d elements in the array :\n", n1);
    for (i = 0; i < n1; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &a[i]);
    }

    printf("Input the number of elements to be stored in the second array :");
    scanf("%d", &n2);
    int b[n2];
    printf("Input %d elements in the array :\n", n2);
    for (i = 0; i < n2; i++)
    {
        printf("element -%d :", i);
        scanf("%d", &b[i]);
    }

    int n3 = n1 + n2;
    int c[n3];

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n3; i++)
    {
        c[i + n1] = b[i];
    }

    for (i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    for (i = 0; i < n3 - 1; i++) {
        for (j = 0; j < n3 - i - 1; j++) {
            if (c[j] > c[j + 1]) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}