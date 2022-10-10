#include <stdio.h>
int main()
{
    int a[3][3], i, j,sum=0;
    for (i = 0; i < 3; i++)
    {
        printf("\n enter 3 a number: ");

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n matrix entered is :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i==2-i)
            sum=sum+a[i][j];
        }
    }
    printf("\n sum of left diagonal is = %d",sum);
    return 0;
}