
#import <stdio.h>
#import <stdlib.h>
unsigned int min(unsigned int a,unsigned int b,unsigned int c)
{
	if(a<b &&a<c)
	return a;
	else if(b<c)
	return b;
	else 
	return c;
	
	
}
unsigned int nthugly(unsigned int n)
{
	unsigned int dp[n];
	unsigned int p2=0,p3=0,p5=0;
	unsigned int next_ugly;
	dp[0]=1;
	int i;
	for(i=0;i<n;i++)
	{
		next_ugly=min(dp[p2]*2,dp[p3]*3,dp[p5]*5);
		dp[i]=next_ugly;
		if(next_ugly==dp[p2]*2)
		p2=p2+1;
			if(next_ugly==dp[p3]*3)
		p3=p3+1;
			if(next_ugly==dp[p5]*5)
		p5=p5+1;
	}
	return next_ugly;

}
int main()
{
	int n;
	printf("Enter the range n\n");
	scanf("%u",&n);
	unsigned int m=nthugly(n);
	printf("%d\n",m);
	
	
}
