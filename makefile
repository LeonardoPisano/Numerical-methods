.PHONY: clean

CC=g++

all: row qwe

clean:
	rm -f row hello qwe qwe1

row: row.cc
	${CC} -o row row.cc


qwe: qwe.cc
	${CC} -o qwe qwe.cc

