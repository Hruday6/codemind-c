#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if('a'==n || 'e'==n || 'i'==n || 'o'==n || 'u'==n || 'A'==n || 'E'==n || 'I'==n || 'O'==n || 'U'==n)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}