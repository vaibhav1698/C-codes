#include<stdio.h>
#include<math.h>
int main()
{
		int i, imin, j, temp;
		int a[] = {7,5,2,4,1,3,};
		
		for(i=0; i<5; i++) /*using 4 as the size of array is 6 and we need to iterate till 6-2=4 */
		{
				imin = i;
				
				for(j=i+1; j<6; j++) /*using 5 to represent size-1 */
				{
						if (a[j]<a[imin])
						{
								imin = j;
						}
				}
				
				temp = a[i];
				a[i]= a[imin];
				a[imin]=temp;
		}
		
		for(i=0; i<6;i++)
		{
				printf("%d", a[i]);
		}
}

