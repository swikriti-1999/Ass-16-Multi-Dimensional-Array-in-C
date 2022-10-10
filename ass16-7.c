#include <stdio.h>
int main()
{
    int a[3][3], r, c;
    for (r = 0; r < 3; r++)
    {
        printf("\n enter 3 a number: ");

        for (c = 0; c < 3; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("\n matrix entered is :");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d", a[r][c]);
        }
        printf("\n");
    }
    printf("\n lower triangular matrix: \n");
    for (r = 0; r < 3; r++)
    {
        for (c= 0; c < 3; c++)
        {
            if(c<=r)
            printf("%d",a[r][c]);
        }
        printf("\n");
    }
    return 0;
}