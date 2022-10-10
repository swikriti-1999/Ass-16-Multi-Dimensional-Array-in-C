#include<stdio.h>
int main()
{
    int i,j,a[3][3],count,max=0,r=0;
    for(i=0;i<3;i++)
    {
        printf("\n enter 3 numbers: \n");
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enterred matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        count=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            count++;
        }
        if(max<count)
        {
            max=count;
            r=i+1;
        }
        
    }
    printf("\n row with maximum no.of 1 is : %d",r);
    return 0;
}