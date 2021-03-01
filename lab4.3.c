#include<stdio.h>
int main()
{
    char text[201];
    char edit[201]="";
    scanf("%s",text);
    int j=0;
    for(int i=0;text[i]!='\0';i++)
    {
        if(text[i]!=text[i+1])
        {
            edit[j]=text[i];
            j++;
        }
    }
    printf("%s",edit);
}
