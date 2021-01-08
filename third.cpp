#include<stdio.h>
#include<math.h>
int main()
{
		int a[]={5,2,4,6,1,3};
		int temp=0;
		int i;
		for(int j=1; j<6; j++)
		{
				temp=a[j];
				i=j-1;
				while(i>=0 && a[i]<temp)
				{
						a[i+1]=a[i];
						i=i-1;
				}
			a[i+1] = temp;
		}
		
		for(int j=0;j<6;j++)
			printf("%d", a[j]);
}
