/*#include<stdio.h>
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
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(number[i][j]==0)
            {
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}*/

#include<stdio.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int element=row*column;
    //printf("%d %d",row,column);
    int number[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(number[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if(element==cnt)
    {
        printf("zero matrix");
    }
    else
    {
        printf("matrix noy");
    }
}