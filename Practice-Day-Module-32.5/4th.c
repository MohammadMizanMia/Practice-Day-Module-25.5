#include<stdio.h>
void reverssolve(int n)
{
    if(n==0) return;
    printf("%d ",n);
    reverssolve(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
   reverssolve(n);
    return 0;
}
