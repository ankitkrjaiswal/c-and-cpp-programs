#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
          int n;
    printf("Enter N number\n");
    scanf("%d",&n);
   for (int i=1;i<=n;i++)
   {
                    int nd=0,sd=0;
   for (int k=i;k>=1;k=k/10)
    {
              nd++;
    }
 for (int j=i;j>=1;j=j/10)
    {
              int d=j%10;
              sd=sd+(pow(d,nd));
    }
    if(sd==i)
         printf("%d \n",i);
   }
    return 0;
}
