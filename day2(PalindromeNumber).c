#include<stdio.h>
#include<conio.h>




void main(){
	
	int n , c , sum=0 , r ;
	printf ("Enter any Intiger : ");
	scanf("%d",&n);
	c=n;
	while (n>0){
		r = n%10;
		sum=r+(sum*10);
		//printf("%d=%d+(%d*10);\n",sum,r,sum); 
		n=n/10;
	}
	if(c==sum){
	 	printf("Palindrome Number.");
	}
	else {
	 	printf ("Not Palidrome Number.");
	}
	getch();	
}
