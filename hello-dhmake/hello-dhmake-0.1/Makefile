CC = gcc
CFLAGS =
LDFLAGS =

# DESTDIR =
# Use /usr/local would cause issue: dh_usrlocal: debian/hello-demake/usr/local/bin/covid-terminator is not a directory
# prefix = /usr/local
prefix = 

all: src/covid-terminator

src/covid-terminator: src/covid-terminator.c
	@echo "CFLAGS=$(CFLAGS)" | \
                fold -s -w 70 | \
                sed -e 's/^/# /'
	$(CC) $(CFLAGS) $^ -o $@ $(LDCFLAGS)

install: src/covid-terminator
	install -d $(DESTDIR)$(prefix)/bin/
	install src/covid-terminator $(DESTDIR)$(prefix)/bin/

clean:
	rm -f src/covid-terminator

uninstall:
	rm -f $(DESTDIR)$(prefix)/bin/covid-terminator

.PHONY: all install clean uninstall
