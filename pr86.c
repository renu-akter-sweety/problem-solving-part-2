
#include<stdio.h>

void fun(int i)
{
 printf("%d\n",i);
if(i==5)
 return;
 fun(i+1);

}
int main()
{
 fun(1);
 return 0;
}
