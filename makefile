CC := gcc
CFLAGS := -Wall -Werror -pedantic

.PHONY: all clean makedirs cleanobjs

all: makedirs assembler emulator cleanobjs

assembler: assembler.o
	$(CC) $(CFLAGS) -o build/assembler assembler/assembler.o

assembler.o:
	$(CC) $(CFLAGS) -c -o assembler/assembler.o assembler/assembler.c

emulator: emulator.o
	$(CC) $(CFLAGS) -o build/emulator emulator/emulator.o

emulator.o:
	$(CC) $(CFLAGS) -c -o emulator/emulator.o emulator/emulator.c

clean: cleanobjs
	rm -rf build

cleanobjs:
	find . -type f -name '*.o' -exec rm {} +

makedirs:
	mkdir -p build
