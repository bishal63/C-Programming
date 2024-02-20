#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int number[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<col;i++)
    {
        printf("%d ",number[m][i]);
    }
}