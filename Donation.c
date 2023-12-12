#include<stdio.h>
int main()
{
    int x,y,z,Z;
    scanf("%d%d",&x,&y);
    z=x-y;
    Z=y-x;
    if(x>y)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d",Z);
    }
}