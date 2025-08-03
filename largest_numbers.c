#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c)
        {
            printf("a is the largest %d", a);
        }
        else{
            printf("c is the largest %d", b);
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is the largest %d", b);
        }
        else
        {
            printf("c is the largest %d", c);
        }
    }
    return 0;
}