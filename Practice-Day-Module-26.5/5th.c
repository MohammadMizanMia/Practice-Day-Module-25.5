#include<stdio.h>
int last_digits_zero(int ar[],int x);

//main function;
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int sum = last_digits_zero(ar,n);
    printf("%d",sum);
    return 0;
}
// user defined function;
int last_digits_zero(int ar[],int x)
{
    int sum = 0;
    for(int i = 0; i < x; i++)
    {
        if(ar[i]%10==0)
            sum+=ar[i];
    }
    return sum;
}
