


all:soft

soft:App.c
	gcc -g -o $@ App.c

install:
	cp soft /home/brati/Workspace/Linux_Internals/Makefile/NMAKE
	chmod +x /home/brati/Workspace/Linux_Internals/Makefile/NMAKE/soft

clean:
	rm -rf soft

.PHONY:
	all clean install
