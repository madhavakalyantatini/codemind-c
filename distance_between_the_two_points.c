#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%0.4f",x);
    return 0;
}