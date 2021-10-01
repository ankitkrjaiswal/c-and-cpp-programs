#include <stdio.h>
#include<math.h>
int binary(int);
int main()
{
    int n,f;
    printf("Enter number \n");
	scanf("%d",&n);
    printf("%d in binary=%d \n",n,binary(n));
}
int binary(int n)
{
    int b;
    int r,i=1;
    while(n!=0)
    {
        r=n%2;
        b=b+r*i;
        i=i*10;
        n=n/2;
    }
    return b;
}


