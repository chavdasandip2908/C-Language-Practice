#include<stdio.h>

void armstrong_number(int num){
	int temp=num, sum=0,r;
	
	while(num>0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	
	if(temp==sum)
	{
		printf("%d is Armstrong Number. ",temp);
	}
	
	else
	{
		printf("%d is not Armstrong Number. ",temp);
	}
	getch();
}

void main(){
	int n ;
	printf("Enter any Number : ");
	scanf("%d",&n);
	
	armstrong_number(n);		
	
	getch();
}
