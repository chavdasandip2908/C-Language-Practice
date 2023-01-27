#include<stdio.h>

int reverseNumber(int num){
	int reverse=0,r;
//	while(num>0){
//		r=num%10;
//		num/=10;
//		printf("%d",r);
//	}
//	printf("%d",reverse);
	
		
//			OR


	while(num>0){
		r=num%10;
		reverse=reverse*10+r;
		num/=10;	
	}
	
	return reverse;
}

void main (){
	int n;
	printf("Enter any Number : ");
	scanf("%d",&n);
	
//	1.	
//		 int rev=reverseNumber(n);
//		printf("%d",rev);
//				or
//	2.
		printf("%d",reverseNumber(n));
	
	
	getch();
}
