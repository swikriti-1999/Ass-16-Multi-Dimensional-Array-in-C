#include <stdio.h>
int main()
{
    int a[3][3], i, j, count = 0, total = 0, digit = 0, sparse = 0, dense = 0;
    for (i = 0; i < 3; i++)
    {
        printf("\n enter 3 a number: ");

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n matrix entered is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                count++;
            else
                digit++;

            total++;
        }
    }
    // printf("\n total: %d", total);
    // printf("\ncount: %d", count);
    // printf("\n digit :%d", digit);

    sparse = (count % total )* 100;
    // printf("\n sparse: %d", sparse);

    dense = (digit % total )* 100;
    // printf("\n dense: %d", dense);

    if (sparse > dense)
        printf("\n its sparse matix");
    else
        printf("\n its dense matrix");
    return 0;
}