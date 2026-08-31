#include<stdio.h>
int main()
{
	int num,reverse=0,digit;
	
	printf("enter a number:");
	 scanf("%d",&num);
	 
	 while(num!=0)
	 
	 	{
	 			digit=num %10;
	 			
	 				reverse=reverse*10+digit;
	 				
	 				num=num/10;
	 				
		 }
		 printf("reversed number=%d",reverse);
		 
		 return 0;
}