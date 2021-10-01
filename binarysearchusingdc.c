//Binary Search using Divide and Conquer approach in C
#include <stdio.h>
int binarySearch(int a[], int n, int data) 
{
    int low = 0, high = n-1;
    while (low <= high) 
	{
        int mid = (low + high)/2;   
        if (data == a[mid])
		 {
            return mid;
        }
        else if (data < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
 
 
int main()
{
    int n,i;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values in the Array \n");
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &a[i]);
    }
    int val;
    printf("Enter the value to be searched: ");
    scanf("%d", &val);
    int index = binarySearch(a, n,val);
    if (index != -1) 
	{
        printf("Element found in the Array!!");
    }
    else 
	{
        printf("Element not found in the Array!!");
    }
    return 0;
}
