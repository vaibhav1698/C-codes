/* binary search on a sorted array */
#include<stdio.h>
int main()
{
		int a[]={1,2,3,4,5,6,7,8,9};
		int n= (sizeof(a)/sizeof(int));
		int first = 0, last = n-1, search, middle;
		
		printf("Enter value to find:");
  		scanf("%d", &search);
  		
  		middle = (first+last)/2;
  		
  		while (first <= last)
  		{
  				if (search<a[middle])
  					last = middle - 1;
  				else if (a[middle] == search)
  				{
  						printf("%d found at location %d.\n", search, middle+1);
      					break;
				}
				else
					first = middle + 1;
				middle = (first + last)/2;
				  
		}
		
		if (first>last)
			printf("Not found! %d isn't present in the list.\n", search);
		
  		
}
