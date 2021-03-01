#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,min=2000,lomax=0,lomin=0,sum=0;
    for(int i=0;i<n-3;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum+=(a[i][0]*4)+(a[i][1]*2)+(a[i][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            lomax=i;
        }
        if(min>sum)
        {
            min=sum;
            lomin=i;
        }
    }
    printf("%d %d",lomax+1,lomin+1);
}
