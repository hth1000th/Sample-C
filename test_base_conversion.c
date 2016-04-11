#include <stdio.h>
#include <assert.h>
#include <string.h>

#include <functions_to_convert.h>
#include <test_base_conversion.h>

int main(void) {
  test_to_dec();

  test_from_dec();

  puts("Testing Complete!!");
  return 0;
}

void test_to_dec() {
  puts("Testing int to_dec(char input[], int source)");
  assert(to_dec("1010", 2) == 10);
  assert(to_dec("NML52", 25) == 9341377);
  assert(to_dec("A1", 16) == 161);
  assert(to_dec("ZZZ", 36) == 46655);
}

void test_from_dec() {
	char output[10];
  puts("Testing void from_dec(int input, int destination, char output[])");
  from_dec(20,8,output);
	assert(strcasecmp(output, "24") == 0);
	from_dec(30,19,output);
  assert(strcasecmp(output, "1B") == 0);
  from_dec(0,36,output);
  assert(strcasecmp(output, "0") == 0);
  from_dec(999,36,output);
  assert(strcasecmp(output, "RR") == 0);
  from_dec(1679615,36,output);
  assert(strcasecmp(output, "ZZZZ") == 0);
}
