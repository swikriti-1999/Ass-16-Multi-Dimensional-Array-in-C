#include<stdio.h>
int main()
{
    int a[3][3][4],b[3][3][4],i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter 4 a number: ");
            for(k=0;k<4;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter 4 a number: ");
            for(k=0;k<4;k++)
            {
                scanf("%d",&b[i][j][k]);
            }
        }
    }
    printf("\n sum of array : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                printf(" %d",a[i][j][k]+b[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
  
  

return 0;  
}