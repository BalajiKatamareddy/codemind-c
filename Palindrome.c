#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    printf("True
");
    else
    printf("False
");
}