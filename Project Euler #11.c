// largest Product of grid

#include<stdio.h>
#define n 20
int a[21][21];

int main()
{
    int i,j;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
            scanf("%d",&a[i][j]);

    long long int sum = 0;
    long long int prod =1;
    for(i=0;i<n;i++)
        for(j=0;j<n-4;j++)
        {
            prod = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if(prod>sum)
                sum = prod;
        }

    for(j=0;j<n;j++)
    {
        for(i=0;i<n-4;i++)
        {
            prod = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            if(prod>sum)
                sum = prod;
        }
    }

    for(i=0;i<n-4;i++)
    {
        for(j=0;j<n-4;j++)
        {
            prod = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            if(prod>sum)
                sum = prod;
        }
    }

    for(i=3;i<n;i++)
    {
        for(j=3;j<n;j++)
        {
            prod = a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
            if(prod>sum)
                sum = prod;
        }
    }

    printf("%lld\n",sum);
    return 0;
}
