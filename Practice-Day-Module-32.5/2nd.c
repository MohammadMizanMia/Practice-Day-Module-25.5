#include <stdio.h>
int lastdigit(int ar[])
{
    if(ar[0]<10) return ar[0];
    int l = ar[0]%10;
    return l;
}

int lastsum(int ar[],int n)
{
    int s;
    if(n==0) return 0;
    int last = lastdigit(ar);
     s = lastsum(ar+1, n-1);
    return s+last;
}
int main() {

   int n;
   scanf("%d",&n);
   int ar[n];

   for(int i = 0; i < n; i++)
   {
       scanf("%d",&ar[i]);
   }
    int ans =  lastsum(ar,n);
    printf("%d",ans);

    return 0;
}
