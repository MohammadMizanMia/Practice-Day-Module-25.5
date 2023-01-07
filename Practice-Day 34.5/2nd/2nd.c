#include<stdio.h>
int main()
{
    FILE *input;
    input = fopen("input.txt","r");
    if(input == NULL)
    {
        printf("page not found\n");
        return 0;
    }
    FILE *output;
    output = fopen("output.txt","w");

    int n;
    fscanf(input,"%d",&n);
    for(int i = 1; i <= n; i++)
    {
        fprintf(output,"%d ",i);
    }
    fclose(input);
    fclose(output);
    return 0;
}
