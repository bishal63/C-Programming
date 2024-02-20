#include<stdio.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    //printf("%d %d",row,column);
    int number[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    int a;
    scanf("%d",&a);
    for(int i=0;i<column;i++)
    {
        printf("%d",number[a][i]);
    }
}