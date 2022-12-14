#include <stdio.h>
int main() {

   int arr[3][3],rock,i,j;
   for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }
   scanf("%d",&rock);

   for(i = 0; i < rock; i++)
   {
        int a,b;
       scanf("%d %d",&a, &b);
       arr[a-1][b-1] = 1;
   }
  printf("................\n");
  for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j]!=1)
                    printf("%d %d",i+1, j+1);
            else
                continue;
            printf("\n");
        }
    }
    return 0;
}
