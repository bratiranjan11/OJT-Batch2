package=soft
version=1.0
tarname=$(package)
distdir=$(tarname)-$(version)

all clean check install soft:
	cd src && $(MAKE) $@

dist:$(distdir).tar.gz

$(distdir).tar.gz:$(distdir)
	tar chof -$(distdir) | gzip -9 -c > $@

$(distdir):FORCE
	mkdir -p $(distdir)/src
	cp Makefile $(distdir)
	cp src/Makefile src/App.c $(distdir)/src

distclean:FORCE

FORCE:
	rm -rf $(distdir).tar.gz

.PHONY:
	FORCE all clean check install dist
