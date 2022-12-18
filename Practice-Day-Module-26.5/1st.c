#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    int * p = &a;
    int * q = &b;
    float sum = (*p + *q)/2.0;
    float* avg = &sum;
    printf("%f",*avg);
    return 0;
}
