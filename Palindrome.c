#include<stdio.h>
int main()
{
    int rev=0,rem,m,n;
    scanf("%d",&m);
    n=m;
    while(m!=0)
    {
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
    if(n==rev)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    return 0;
}