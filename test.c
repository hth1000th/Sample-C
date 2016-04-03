#include <stdio.h>
#include <assert.h>

#include <functions.h>
#include <test.h>

int main(void) {
  
  	test_to_dec();
  
 	test_from_dec();
  
  	puts("testing complete");
  	return 0;
}

void test_to_dec() {
  	puts("testing int to_dec(char input[], int source)");
  	assert(to_dec("1010", 2) == 10)
  	assert(to_dec("A1", 16) == 161);
}

void test_from_dec() {
	char output[20];
  	puts("testing void from_dec(int input, int destination, char output[])");
  	from_dec(20,8,output);
	assert(output == "24");
	from_dec(30,19,output);
  	assert(output == "1B");
}
