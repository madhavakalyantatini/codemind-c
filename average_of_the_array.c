#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float ar[n],av,s=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+ar[i];
        av=s/n;
    }
    printf("%.2f",av);
}