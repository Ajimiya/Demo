#include<stdio.h>
#include<conio.h>
void main()
{
	int rem,num,temp,sum=0;
	clrscr();
	printf("Enter the number  :  ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==num)
	{
		printf("%d is an armstrong number",num);
	}
	else
	{
		printf("%d is not an armstrong number ",num);
	}
	getch();
}