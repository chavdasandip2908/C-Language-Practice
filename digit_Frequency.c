#include<stdio.h>
#include<conio.h>
#include<string.h>

void digit_frequency(char s[1000]){
  	int i,giro=0,one=0,two=0,three=0,fore=0,five=0,six=0,seven=0,eight=0,nine=0;
	for(i=0;i<strlen(s);i++)
		{
			switch (s[i])
			{
			case '0': giro++;break;
			case '1': one++;break;
			case '2': two++;break;
			case '3': three++;break;
			case '4': fore++;break;
			case '5': five++;break;
			case '6': six++;break;
			case '7': seven++;break;
			case '8': eight++;break;
			case '9': nine++;break;
		}
	}

	printf("%d %d %d %d %d %d %d %d %d %d",giro,one,two,three,fore,five,six,seven,eight,nine);
    
}

void main(){
    char s[10000] ;
    scanf ("%s",&s);
    
	digit_frequency(s);

    getch() ; 
}

