bin_PROGRAMS = main
main_SOURCES = main.cpp funcA.cpp funcA.h

deb:

	dpkg-buildpackage -us -uc -b && dpkg-deb --build myproject
