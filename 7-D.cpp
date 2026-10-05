#include<stdio.h>
int main ()
{
	int numbers[5];
	int sum = 0;
	float average;
	int i;
	 	printf("Enter 5 elements:\n");
	 	for (i=0;i<5;i++)
	 		
	 		{
	 			printf("Enter element %d:",i+1);
	 			scanf("%d",&numbers[i]);
				sum=sum+numbers[i];
					 
			}
			
			average=sum/5.0;
			
			printf("\nsum=%d\n",sum);
			printf("Average=%.2f\n",average);
			
			return 0;
}