#include<stdio.h>
int main()
{
    int  i=12345678;
    char *ptr=(char*)&i;
    printf("%d",*ptr);
}

