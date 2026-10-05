#include<stdio.h>
int main ()
{
	int numbers [5];
	int min;
	int i;
	 
	  printf("Enter 5 elements:\n");
	  
	  for (i=0;i<5;i++)
	  
	 	{
	 		printf("enter element %d:",i+1);
	 		scanf ("%d",&numbers[i]);
	 		
		  } 
		   min = numbers[0];
		   
		    for (i=1;i<5;i++)
		    	{
		    		if (numbers[i]<min)
		    		 {
		    		 	min=numbers[i];
					 }
				}
					printf("\nminimum element = %d\n",min);
					return 0;
}