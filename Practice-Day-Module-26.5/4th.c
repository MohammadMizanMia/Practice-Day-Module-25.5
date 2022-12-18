#include<stdio.h>
float area_of_circle(float x);

//main function;
int main()
{
    int n;
    scanf("%d",&n);
    float a = area_of_circle(n);
    printf("%f",a);
    return 0;
}

// user defined function;
float  area_of_circle(float  x)
{
    float pi = 3.1416;
    float area = pi*x*x;
    return area;

}
