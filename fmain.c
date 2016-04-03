#include "functions.h"
#include <stdio.h>

int main(void)
{
	int input_as_int;
	char input_as_chr[20];
	int source;
	int destination;
	char output[20];	
	int result;
	
	puts("Alphabets MUST be entered in UPPERCASE!");
  	puts("Enter a base for source to convert:(2~36)");
  	scanf("%d",&source);
  	puts("Enter a base for destination to convert:(2~36)");
  	scanf("%d", &destination);
	
	if (source == 10) {
		puts("Enter any number:");
  		scanf("%d", &input_as_int);
  		if(!isalpha(input_as_int)) {
  			from_dec(input_as_int, destination, output);
			printf("The number converted from decimal digit to %d base is %s.\n", destination, output); 
		}
		else { 
			puts("INVALID INPUT! TRY AGAIN!"); 
		}
	}
	else if (destination == 10) {
		puts("Enter any number:(including letters) (Eg. A1, B2C)");
		scanf("%s", input_as_chr);
		result = to_dec(input_as_chr, source);
		printf("The number converted from %d base to decimal digit is %d.\n", source, result); 
	}
	else {
		puts("Enter any number:(including letters) (Eg. A1, B2C)");
		scanf("%s", input_as_chr);
		result = to_dec(input_as_chr, source);
		from_dec(result, destination, output);
		printf("The number convered from %d base to %d base is %s.\n", source, destination, output); 
	}
	
	return 0;	
}
