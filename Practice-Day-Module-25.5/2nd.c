#include<stdio.h>
//function prototype;
void sorting (int ar[],int x);
//main function;
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    sorting(ar,n);
    int small = ar[k-1];
    int larg = ar[n-k];

    printf("%dth largest number: %d\n",k,larg);
    printf("%dth smallest number: %d\n",k,small);
    return 0;
}
//user defined function;
void sorting (int nar[],int x)
{
    int i,j,temp,min;

    for(i=0; i<x-1; i++)
    {
        min = i;
        for(j=i+1; j<x; j++)
        {
            if(nar[j]<nar[min])
            {
                min = j;
            }
        }
        temp=nar[i];
        nar[i]=nar[min];
        nar[min] = temp;
    }
}


