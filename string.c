/*#include<stdio.h>
int main()
{
    char name[]="mahabub alam bishal\0";
    printf("%d",sizeof(name)/sizeof(char));
    printf("\n");
    printf("%s",name);
    return 0;
}*/

#include<stdio.h>
int main()
{
    char name[8]="mahabub";
    printf("%d",sizeof(name)/sizeof(char));
    printf("\n");
    printf("%s",name);
    return 0;
}