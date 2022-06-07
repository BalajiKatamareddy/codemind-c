#include<stdio.h>
int fact(int);
int main()
{
    int n,sum=0,k,r,f;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=k%10;
        f=fact(r);
        k=k/10;
        sum=sum+f;
    }
    if(sum==n)
    printf("The number %d is a strong number
",n);
    else
    printf("The number %d is not a strong number
",n);
    return 0;
}
int fact(int r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
    {
        mul=mul*i;
    }
    return mul;
}