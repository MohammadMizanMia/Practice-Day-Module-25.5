#include <stdio.h>

int main() {
    int * p;
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);

    sum = a+b+c;
    p = &sum;
    printf("%d",*p);
    return 0;
}
