CC = gcc -Wall -pedantic

build_dir:
	mkdir -p build

element: build_dir
	$(CC) -c element.c -o build/element.o

merge: build_dir
	$(CC) -c merge.c -o build/merge.o

merge_sort: build_dir
	$(CC) -c merge_sort.c -o build/merge_sort.o

main: element merge merge_sort build_dir
	$(CC) build/element.o build/merge.o build/merge_sort.o main.c -o build/main