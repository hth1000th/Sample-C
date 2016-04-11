all: base_converter.c functions_to_convert.c
	gcc -o main base_converter.c functions_to_convert.c -lm -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test_base_conversion.c functions_to_convert.c
	gcc -o t test_base_conversion.c functions_to_convert.c -lm -I .
	./t
	rm -f t
