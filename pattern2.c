#include <stdio.h>
int main()
{
   int n;
   printf("Enter n : ");
   scanf("%d",&n);
  int space=n+4-1;int t=1;
   for(int i=0;i<n;i++)
   {
         for(int j=space;j>=1;j--)
            {
              printf(" ");
            }
	   for(int k=1;k<=i;k++)
	   {
	   printf("%d ",t++);
       }
	printf("\n");
    space--;
   }
   return 0;
}
