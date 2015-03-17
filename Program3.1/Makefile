a.out: main.o listmkr.o analys.o load.o make_text.o roll.o data_compress.o
	$(CC) -pedantic -ansi -Wall  listmkr.o main.o analys.o load.o make_text.o roll.o data_compress.o
	- rm *.o
listmkr.o: ./load_list/listmkr.c
	$(CC) -c ./load_list/listmkr.c 
analys.o: ./load_list/analys.c
	$(CC) -c ./load_list/analys.c	
load.o: ./load_list/load.c
	$(CC) -c ./load_list/load.c
make_text.o: ./make_text/make_text.c
	$(CC) -c ./make_text/make_text.c
roll.o: ./make_text/roll.c
	$(CC) -c ./make_text/roll.c
data_compress.o: ./d_compress/data_compress.c
	$(CC) -c ./d_compress/data_compress.c 

.PHONY: clean

clean:
	-rm *.o a.out 
