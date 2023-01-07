#include <stdio.h>

int main()
{
    FILE *input;
    input = fopen("input.txt","r");
    if(input == NULL)
    {
        printf("file not found\n");
        return 0;
    }
    FILE *output;
    output = fopen("output.txt","w");

   while(1)
   {
       char ch = fgetc(input);
       if(ch==EOF) break;
       fputc(ch,output);
   }
    return 0;
}
