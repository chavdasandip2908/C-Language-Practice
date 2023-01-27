#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printing_tokens(char str[1000]){
	int i;
	for(i=0;i<strlen(str);i++){
	        if(str[i]==' ')
	        {
	            printf("\n");
	        }
	        else
	        {
	            printf("%c",str[i]);
	        } 
	}	
}

void main() {

    char s[1000];
    scanf("%[^\n]", &s);  // "%[^\n]" --> This Can Be Used To Store Space In The Array..
    
	printing_tokens(s);
 	 
	getch();
}

