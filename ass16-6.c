#include <stdio.h>
int main()
{
    int a[3][3], i, j,sum=0,row=0,coulmn=0,r,c;
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
        r=0;
        for (j = 0; j < 3; j++)
        {
            r=r+a[i][j];
        }
        printf("\n sum of row %d is = %d",i,r);
        row=row+r;
    }
    for (j = 0; j < 3; j++)
    {
        c=0;
        for (i = 0; i < 3; i++)
        {
            c=c+a[i][j];
        }
        printf("\n sum of coulmn %d is = %d",j,c);
        coulmn=coulmn+c;
    }
    printf("\n sum of row is = %d",row);
    printf("\n sum of coulmn is = %d",coulmn);
    return 0;
}