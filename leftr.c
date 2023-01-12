#include<stdio.h>
int rotatebit(int num,int pos)
{
    int msb=0;
    while(pos--)
    {
       msb=num>>pos&1;
       num=num<<1|msb;
    }
    printf("%d",num);
}
int main()
{
    int num=0,pos=0;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the pos to rotate:");
    scanf("%d",&pos);
    rotatebit(num,pos);
}
