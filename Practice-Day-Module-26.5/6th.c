#include<stdio.h>
void lower_to_uppercase(char ar[]);
//main function;
int main()
{
    char ar[50];
    scanf("%s",ar);

    lower_to_uppercase(ar);
    return 0;
}


//user defined function;
void lower_to_uppercase(char ar[])
{
    for(int i = 0; ar[i]!='\0'; i++)
    {
        int temp = ar[i]-96;
        if(temp % 2 == 0)
        {
            ar[i]-=32;
        }
    }

   printf("%s",ar);
}
