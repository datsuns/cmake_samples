default: all

all:
	mkdir -p _build
	cd _build && cmake .. && make
