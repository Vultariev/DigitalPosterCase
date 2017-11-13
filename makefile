CC=gcc
obs=main.o
out=poster
sdl=$(shell sdl2-config --libs --cflags)
crl=$(shell curl-config --libs)
CFLAGS=$(sdl) $(crl)

all: $(obs)
	$(CC) $(CFLAGS) $(obs) -o $(out)

.PHONY: clean tidy

clean:
	-rm $(obs) $(out)

tidy:
	-rm $(obs)
