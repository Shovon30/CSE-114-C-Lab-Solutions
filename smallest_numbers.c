#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b && a<c)
    {
        printf("a is the smallest %d", a);
    }
    else if(b<c && b<a)
    {
        printf("b is the smallest %d", b);
    }
    else
    {
        printf("c is the smallest %d", c);

    }
    return 0;
}