#include <stdio.h>
 int main()
 {
     int size;int value;
     int i,j;
     int c=1;
     printf("enter the size of the array \n");
     scanf("%d",&size);
     int a[size];
     printf("enter the array values \n");
     for(i=0;i<size;i++)
     {
         scanf("%d",&a[i]);
     }
       printf("The original array is: \n");
     for(i=0;i<size;i++)
     {
         printf("%d",a[i]);
     }
     printf("\n");
      for(  i=0;i<size-1;i++)
      {
         for(j=(i+1);j<size;j++)    {
              if(a[i]==a[j])
              {
                c=c+1;
                a[j]=0;
              }
          }
         if(c>1  && a[i]!=0)
         printf(" the frequency of %d  :  %d \n",a[i],c);
         c=1;
     }
    return 0;
 }

