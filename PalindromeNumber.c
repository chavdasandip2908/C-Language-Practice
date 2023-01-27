#include<stdio.h>
#include<conio.h>

void palindromeNumber(int num){
	int c , sum=0 , r ;
	
	c=num;
	while (num>0){
		r = num%10;
		sum=r+(sum*10);
		num=num/10;
	}
	if(c==sum){
	 	printf("Palindrome Number.");
	}
	else {
	 	printf ("Not Palidrome Number.");
	}
}


void main(){
	
	int n ;
	printf ("Enter any Intiger : ");
	scanf("%d",&n);
	palindromeNumber(n);
	
	getch();	
}
