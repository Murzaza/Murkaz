export DEBUGBUILD = no
ifeq ($(DEBUGBUILD), yes)
	DEBUGFLAGS = -g -DDEBUG
else
	DEBUGFLAGS = -O2 -DNDEBUG
endif

export CC = g++
export CFLAGS = -W -Wall -ansi $(DEBUGFLAGS)
export LDFLAGS =
export EXECPATH = ../bin

EXECPATH = ../bin

murkaz: main.o game.o render.o
	$(CC) $(LDFLAGS) -o $(EXECPATH)/$@ $^ -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system -L/usr/local/lib/

main.o: main.cc
	$(CC) -o $@ -c $< $(CFLAGS)

game.o: game.cc game.h render.o
	$(CC) -o $@ -c $< $(CFLAGS)

render.o: render.cc render.h
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o
