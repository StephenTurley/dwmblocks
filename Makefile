PREFIX ?= /usr/local
CC ?= gcc

output: dwmblocks.c blocks.h
	${CC} `pkg-config --cflags x11 --libs x11` dwmblocks.c -lX11 -o dwmblocks
clean:
	rm -f *.o *.gch dwmblocks
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
