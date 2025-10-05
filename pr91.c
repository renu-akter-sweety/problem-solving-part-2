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
 int rowfind;//exact row

 scanf("%d",&rowfind);
 for(int i=0;i<col;i++)
 {
  printf("%d ",a[rowfind][i]);

 }
 int colfind;
 scanf("%d ",colfind);
 for(int i=0;i<row;i++)
 {
  printf("%d ",a[i][colfind]);
 }
 return 0;

}
