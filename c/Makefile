CC = gcc
CFLAGS = -Wall -Wextra -std=c17 -g 

COMMON_LIBS = utils.c

MISTAKES = mistake-nan

all: $(MISTAKES)

mistake-nan: mistake-nan.c
	$(CC) $(CFLAGS) $(COMMON_LIBS) -o mistake-nan mistake-nan.c

clean:
	rm -f $(MISTAKES) *.o

