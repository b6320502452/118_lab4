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
    int max,min,lomax=0,lomin=0,sum;
    max=(a[0][0]*4)+(a[0][1]*2)+(a[0][2]*1);
    min=(a[0][0]*4)+(a[0][1]*2)+(a[0][2]*1);
    for(int i=1;i<n;i++)
    {
        sum=(a[i][0]*4)+(a[i][1]*2)+(a[i][2]*1);
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
    printf("%d %d",lomax,lomin);
}
