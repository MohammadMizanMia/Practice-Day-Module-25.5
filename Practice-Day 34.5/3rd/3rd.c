#include<stdio.h>

int main()
{
    FILE * input;
    input = fopen("input.txt","r");
    if(input == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    FILE *output;
    output = fopen("output.txt","w");

    int n;
    fscanf(input,"%d",&n);
    for(int i = 0; i < n; i++)
    {
        int a;
        fscanf(input,"%d",&a);
        if(a>0)
        {
            for(int j = a; j != (-a-1); j--)
            {
                fprintf(output,"%d ",j);
            }
            printf("\n");
        }
        if(a<0)
        {
            for(int j = a; j != -(a-1); j++)
            {
                fprintf(output,"%d ",j);
                  printf("\n");
            }

        }
    }
    return 0;
}
