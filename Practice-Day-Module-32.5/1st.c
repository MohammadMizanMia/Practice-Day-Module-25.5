#include<stdio.h>
int sumpow(int n, int m)
{
    if(m==0) return 1;
   int s =  sumpow(n,m-1);
   return s*n;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int ans = sumpow(n,m);
    printf("%d",ans);

    return 0;
}
