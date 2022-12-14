#include<stdio.h>
//function prototype;
void strictlyLG(int narr[], int x, int y);

//main function;
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);

    strictlyLG(ar,n,k);

    return 0;
}

//user defined function;
void strictlyLG(int narr[], int x, int y)
{
    int count=0;
    for(int i=0; i<x; i++)
    {
        if(narr[i]!=y)
        {
            count++;
        }
        else
            continue;
    }
    printf("%d",count);
}
