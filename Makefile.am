bin_PROGRAMS = main
main_SOURCES = main.cpp funcA.cpp funcA.h

check_PROGRAMS = test
test_main_SOURCES = test.cpp funcA.cpp funcA.h

deb:

	dpkg-buildpackage -us -uc -b

check: test
	@./test
