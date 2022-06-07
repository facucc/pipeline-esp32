CFLAGS = -Wall -pedantic -Wextra -Wconversion -std=gnu11 -O2 -Werror
CC = gcc
#-pg : Generate extra code to write profile information suitable for the analysis program gprof. 
#You must use this option when compiling the source files you want data about, 
#and you must also use it when linking.

all: folders main #tests

install:
#sudo apt install netpbm -y

folders:
	mkdir -p ./bin

main: ./src/main.c ./src/welcome.c
	$(CC) $(CFLAGS) ./src/main.c ./src/welcome.c -o ./bin/main

#tests: ./tests/test_main.c
#	$(CC) $(CFLAGS) ./tests/test_main.c -o ./bin/test_main

clean:
	rm -rf ./bin *.o
