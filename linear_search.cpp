#include<stdio.h>
int main()
{
		int arr[]={1,5,3,74,5,8,69};
		int n = sizeof(arr)/sizeof(int);
		int search, i;
		printf("Enter number to search");
		scanf("%d", &search);
		
		for(i=0; i<=n; i++)
		{
				if (arr[i]==search)
				{
				
					printf("Element found at index %d", i);
				}
		}
		
		
		
}
