UNAME_M := $(shell uname -m)
ifeq ($(UNAME_M),aarch64)
	LIBFLAG := -L. -lhdc1080_arm64
else
	LIBFLAG := -L. -lhdc1080_arm32
endif


CFLAGS := -std=c++14 -pthread

all: $(patsubst %.cpp, %, $(wildcard *.cpp))

%: %.cpp Makefile
	g++ $< -o $@ $(CFLAGS) $(LIBFLAG)