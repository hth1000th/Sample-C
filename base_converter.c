#include "functions_to_convert.h"
#include <stdio.h>

int main(void)
{
	int input_as_int;
	char input_as_chr[20];
	int source, destination; // source base; destination base;
	char output[20]; // output after converting from decimal digits to specific base;
	int result_as_decimal; // result after converting specific digits to decimal digits;

	puts("Alphabets MUST be entered in UPPERCASE!");
  puts("Enter a base for source to convert:(2~36)");
  scanf("%d", &source);
  puts("Enter a base for destination to convert:(2~36)");
  scanf("%d", &destination);
	puts("Enter any number:(including letters) (Eg. A1, B2C)");
	scanf("%s", input_as_chr);

	// the process of conversion of specific inputs to decimal digits;
	result_as_decimal = to_dec(input_as_chr, source);

	// the process of conversion of specific decimal digits to another base;
	from_dec(result_as_decimal, destination, output);

	printf("The Number convered from %d Base to %d Base is %s.\n", source, destination, output);

	return 0;
}
