#include<stdio.h>
void  swaping(int*p, int*q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}
int main()
{
   int n;
    scanf("%d",&n);
    int ar[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < (n-1)-i; j++)
        {
            swaping(&ar[j],&ar[j+1]);
        }
    }

    for(int i = 0; i < n ; i ++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
