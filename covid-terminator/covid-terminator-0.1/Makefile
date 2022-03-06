CC = gcc
CFLAGS =
LDFLAGS =

#DESTDIR =
prefix = /usr/local

all: src/covid-terminator

src/covid-terminator: src/covid-terminator.c
	@echo "CFLAGS=$(CFLAGS)" | \
                fold -s -w 70 | \
                sed -e 's/^/# /'
	$(CC) $(CFLAGS) $^ -o $@ $(LDCFLAGS)

install: src/covid-terminator
	install -D src/covid-terminator $(DESTDIR)$(prefix)/bin/covid-terminator

clean:
	rm -f src/covid-terminator

uninstall:
	rm -f $(DESTDIR)$(prefix)/bin/covid-terminator

.PHONY: all install clean uninstall
