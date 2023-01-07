#include<stdio.h>
int lastDigit(int n)
{
    int a = n%10;
    return a;
}
int main()
{
    FILE *input;
    FILE *outpout;
    input = fopen("input.txt","r");
    if(input == NULL)
    {
        printf("file not found. \n");
        return 0;
    }
    outpout = fopen("output.txt","w");
    int n,sum = 0;
    fscanf(input,"%d",&n);
    for(int i = 0; i < n; i++)
    {
        int a;
        fscanf(input,"%d",&a);
        sum+=lastDigit(a);
    }
    fprintf(outpout,"sum = %d",sum);
    return 0;
}
