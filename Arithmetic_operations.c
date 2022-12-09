#include<stdio.h>
int main()
{
    int a,b,sum,dif,mul,qnt,rem;
    scanf("%d%d",&a,&b);
    sum=a+b;
    dif=a-b;
    mul=a*b;
    qnt=a/b;
    rem=a%b;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",dif);
    printf("Product:%d
",mul);
    printf("Quotient:%d
",qnt);
    printf("Remainder:%d
",rem);
}