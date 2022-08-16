CC = gcc
CFLAGS = -std=c99 -pedantic-errors -Wall -Wextra

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o, $(SRC))
DEPS = $(wildcard *.h)

all: tmdb

tmdb: $(OBJ)
	$(CC) $(CFLAGS) -lcurl -shared $^ -o libtmdb.so

install: all
	mkdir -p tmdb /usr/include
	cp *.h  /usr/include/tmdb
	cp libtmdb.so /usr/lib

uninstall:
	rm -rf /usr/include/tmdb
	rm -rf /usr/lib/libtmdb.so

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	$(RM) libtmdb.so $(OBJ)

.PHONY: clean all tmdb install uninstall
