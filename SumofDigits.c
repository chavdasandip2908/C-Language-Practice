#include<stdio.h>
#include<conio.h>

void sumOfDigits(int num){
	int sum=0,m;
	
	while (num>0){
		m = num%10;
		sum+=m;
		num=num/10;
	}
	printf("Your Sum is %d",sum);
}


void main(){
	
	int n;
	printf ("Enter any Number : ");
	scanf("%d",&n);
	sumOfDigits(n);
	getch();
	
}
