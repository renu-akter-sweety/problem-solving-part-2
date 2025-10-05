#include<stdio.h>
int fun(char s[],int i)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    int a=fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i] + 32;
    }
    if(s[i]=='a', || s[i]='e' ,|| s[i]=='i', || s[i]='o', || s[i]='u')
    {
        return a+1;
    }
    else
    {
        return a;
    }
}

int main()
{
 char s[205];
 fgets(s,205,stdin);
 int cnt=fun(s,0);
printf("%d\n",cnt);
    return 0;
}
