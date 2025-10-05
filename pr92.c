
#include<stdio.h>
int main()
{
 int row, col;
 scanf("%d %d",&row, &col);
 int a[row][col];
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   scanf("%d",&a[i][j]);
  }

 }
 int cnt=0;

 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   if(a[i][j]==0)
   {
    cnt++;
   }
  }
 }
 printf("%d\n",cnt);
 return 0;

}
