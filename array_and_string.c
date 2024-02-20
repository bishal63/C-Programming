/*#include<stdio.h>
void mahabub(char word[])
{
    for(int i=0;i<10;i++)
    {
        printf("%c\n",word[i]);
    }
}
int main()
{
    char word[10]="mahabub";
    mahabub(word);
}*/

#include<stdio.h>
void mahabub(char word[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c\n",word[i]);
    }
}
int main()
{
    char word[10]="mahabub";
    mahabub(word,10);
}