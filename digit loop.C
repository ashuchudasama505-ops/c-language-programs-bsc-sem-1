#include<stdio.h>
int main ()
{
		int num,digit,sum=0;
		
		printf("enter a number:");
		scanf("%d",&num);
		
		while (num!=0)
			{
				digit=num%10;
				
				sum=sum+digit;
				
				num=num/10;
			}
			printf("sum of digit =%d",sum);
			
			return 0;
			
}