#include<stdio.h>
int main()
{
    int n,a[4]= {1,0,0,0},tem;
    scanf("%d",&n);
    char s[n][50];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s[i]);
        for(int j=0; s[i][j]!='\0'; j++)
        {
            switch (s[i][j])
            {
            case 'A':
                tem=a[1];
                a[1]=a[2];
                a[2]=tem;
                break;
            case 'B':
                tem=a[0];
                a[0]=a[3];
                a[3]=tem;
                break;
            case 'C':
                tem=a[0];
                a[0]=a[2];
                a[2]=tem;
                tem=a[1];
                a[1]=a[3];
                a[3]=tem;
                break;
            case 'D':
                tem=a[0];
                a[0]=a[1];
                a[1]=tem;
                tem=a[3];
                a[3]=a[2];
                a[2]=tem;
                break;
            case 'E':
                tem=a[0];
                a[0]=a[3];
                a[3]=tem;
                tem=a[1];
                a[1]=a[2];
                a[2]=tem;
                break;
            }
        }
        for(int j=0; j<4; j++)
        {
            if(a[j]==1)
            {
                printf("%d\n",j+1);
                a[j]=0;
                break;
            }
        }
        a[0]=1;
    }
}
