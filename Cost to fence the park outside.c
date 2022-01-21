#include<stdio.h>
int main()
{
    int l,b,w,c,f_area,T_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    f_area=((l+2*w)*(b+2*w))-(l*b);
    T_cost=f_area*c;
    printf("%d",T_cost);
    return 0;
}