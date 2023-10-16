#include<stdio.h>
int main()
{
    int m1,m2,che,phy,bio;
    scanf("%d%d%d%d%d",&m1,&m2,&che,&phy,&bio);
    if(m1>34 && m2>34 && che>34 && phy>34 && bio>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}