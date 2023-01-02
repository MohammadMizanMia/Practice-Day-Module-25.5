#include<stdio.h>
int n_sum(int n)
{
    if(n==0) return;
    int s =  n_sum(n-1);
    return s+n;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = n_sum(n);
    printf("%d",ans);
    return 0;
}
