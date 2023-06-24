/*
 *           |   1           |   A
 * *         |   1 2         |   A B
 * * *       |   1 2 3       |   A B C
 * * * *     |   1 2 3 4     |   A B C D
 * * * * *   |   1 2 3 4 5   |   A B C D E
 */

/*#include <stdio.h>

int main()
{

    int i, j, n = 5;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()
{

    int i, j, n = 5;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}*/

int main()
{

    int i, j, n = 5;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}