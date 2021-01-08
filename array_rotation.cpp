#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a[]={1,2,3,4,5,6,7};
		int i, j, n, d, temp;
		
		system("cls");
		printf("Enter number of roations to be done on the given array:");
		scanf("%d",&d);
		
		n = (sizeof(a)/sizeof(int));
		
		
		for(i=0;i<d;i++)
		{	temp=a[0];
				for(j=0;j<n-1; j++)
					a[j]=a[j+1];
			a[j]=temp;
		}
		
		for (i=0; i<n; i++)
			printf("%d", a[i]);
		
		
}
