#include<stdio.h>
//function prototype;
void power(char ar[]);
//main function;
int main()
{
    char s[100];
    scanf("%s",s);
    power(s);
    return 0;
}
//user defined function;
void power(char ar[])
{
    int len = strlen(ar);
    int sum=0;
    for(int i=0; i<len; i++)
    {
        sum+=ar[i]-96;
    }
    int count=0,flag=1;
    while(sum!=1)
    {
        if(sum%2==0)
        {
            count++;
            sum = sum/2;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("cost = 2^%d",count);
    else
        printf("No");
}



