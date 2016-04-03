#include "functions.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int to_dec(char input[], int source) {
	int length = strlen(input);
	int sum = 0;
	int i , num, mult;
	
	for (i=0; i<length; i++) {
		if(isalpha(input[i])) {
			num = (input[i]-'0')-7; }
		else {
			num = input[i]-'0'; }
		mult = num * pow(source, (length-(i+1)));
		sum += mult;
	}
	return sum;
}

void from_dec(int input, int destination, char output[]) {
	int i, remainder, num = -1, length = 0;
	int in = input;
	
	while(num != 0) {
		num = in / destination;
		if(num != 0)
			in = num;
		length++;
	}
	
	for (i=(length-1); i>=0; i--) {
		remainder = input % destination;
		if(remainder>9) {
			output[i] = (remainder+7)+'0'; }
		else {
			output[i] = remainder + '0'; }
		input = input / destination;
	}
	output[length] = '\0';
}
