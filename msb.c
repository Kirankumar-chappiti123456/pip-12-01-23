#include<stdio.h>
#include<stdlib.h>
#define L 8
int msb(int *num)
{
    int k1=0,i=0;
    for(i=L-1;i>=0;i--)
    {
    k1=((*num)>>i&1==1);
    break;
}
(k1==1)?printf("msb"):printf("not msb");
}
int main()
{
    int s;
    printf("enter the size:");
    scanf("%d",&s);
    printf("enter the number:");
   int *num;
   num=(int*)malloc(s*sizeof(int));
   for(int i=0;i<s;i++)
   {
       scanf("%d",num+i);
   }
   int (*fptr)(int *)=msb;
   fptr(num);
}
