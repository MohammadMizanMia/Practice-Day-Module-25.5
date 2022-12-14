#include <stdio.h>
//function prototype;
void p(int x);
//main function;
int main() {
    int n;
    scanf("%d",&n);
    p(n);
    return 0;
}

// user defined function;
void p(int x)
{
    if(x==0)
    return 1;
    else
   {
      printf("%d ",x);
      p(x-1);
   }
}
