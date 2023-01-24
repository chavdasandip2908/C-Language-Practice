#include<stdio.h>
#include<conio.h>




void main(){
	
	int n,sum=0,m;
	printf ("Enter any Intiger : ");
	scanf("%d",&n);
	
	while (n>0){
		m = n%10;
		sum+=m;
		n=n/10;
	}
	printf("Your Sum is %d",sum);
	
	getch();
	return 0;
}
