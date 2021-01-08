#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a[]={4,2,6,7,9,1,3};
		int i, j, n;
		int temp = 0;
		
		for (i = 0; i<7; i++)
			for(j=0; j<7-i-1;j++)
				if (a[j]>a[j+1])
				{
						temp=a[j+1];
						a[j+1]=a[j];
						a[j]=temp;
				}		
		
		for(i=0; i<7; i++)
			printf("%d", a[i]);
			
		


}


