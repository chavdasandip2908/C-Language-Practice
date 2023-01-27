#include<stdio.h>
#include<conio.h> 

int checkPrimeNumber(int number); // Defind Function..
 
int main(){    
	int n;
	printf("Enter the number to check prime:");    
	scanf("%d",&n);   // Scan Number From User
	checkPrimeNumber(n); // Call Function 
	getch();
	 return 0;
 }
 
//Below Function Using Entered Number Is Prime Number Or Not  
int checkPrimeNumber(int number){
	int i;
	for( i=2;i<=number/2 ;i++){ //Check a i=2 <=number :- true   
		if(number%i==0 && !(number==0)){  //12%2==0 => true   
			printf("%d is a not prime Number ",number);    
			return 0;  
		}    
	} 
	if(number==0){
		printf("0 is Neither a Prime or a Composite Number");
		return 0;
	  }
	printf("%d is a prime Number",number); 
	getch();
	return 0;   
}
