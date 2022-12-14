#include <stdio.h>
//function prototype;
int sum(int x);
//main function;
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}

// user defined function;
int  sum(int x)
{
    if(x==0)
    return ;
    else
   {
        return x + sum(x-1);
   }
}
