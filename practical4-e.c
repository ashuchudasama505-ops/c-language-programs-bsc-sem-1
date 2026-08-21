#include<stdio.h>
int main ()
{
	int choice;
	float num1,num2;
	printf("=====calculator menu =====\n");
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	
	
	printf("enter your choice: ");
	scanf("%d",&choice);
	 
	printf("enter two numbers ( seprated by space): ");
	scanf("%f,%f",&num1,&num2);
	
        	switch(choice)
	{
		
		case 1:
		
		printf("addition=%.2f\n",num1+num2);
	    break;
		
		case 2:
		printf("subtraction=%.2f\n",num1-num2);
		break;
		
		case 3:
		printf("multiplication=%.2f\n",num1*num2);
		break;
		
		case 4:
		if (num2!=0)
		{
			printf("division=%.2f\n",num1/num2);
			}	
			else
		
			{
				("division by zero is not allowed.\n");
				
			}
			break;
	
	 default:
		printf("invalid choice!\n");
			
	}    
		return 0;
}