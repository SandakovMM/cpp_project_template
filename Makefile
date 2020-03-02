.PHONY: all build install clean

out/Makefile:
	mkdir -p out
	cd out && cmake ../

build: out/Makefile
	make -C out all

all: build

clean:
	rm -rf out