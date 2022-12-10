#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/365;
    printf("%d
",b);
    c=(a%365)/7;
    printf("%d",c);
    
}