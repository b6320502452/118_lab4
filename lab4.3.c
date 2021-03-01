#include<stdio.h>
int main()
{
    char text[201];
    char edit[201]="";
    gets(text);
    int j=0;
    for(int i=0;i<strlen(text);i++)
    {
        if(text[i]==text[i+1])
        {
            continue;
        }
        else
        {
            edit[j]=text[i];
            j++;
        }
    }
    puts(edit);
}
