#include<stdio.h>
int main()
{
    int totalminutes,hours,minutes;
    scanf("%d",&totalminutes);
    hours=(totalminutes/60);
    minutes=(totalminutes%60);
    printf("%d Hour(s) %d Minute(s)
",hours,minutes);
}