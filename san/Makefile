.PHONY: all test clean

CXXFLAGS=-fsanitize=address,undefined -fsanitize-recover=address,undefined -fno-omit-frame-pointer
CFLAGS=-fsanitize=address,undefined -fsanitize-recover=address,undefined -fno-omit-frame-pointer 

test:
	clang++ -g -O0 -I.. ../json.c test.cpp -lm -o test ${CXXFLAGS}

