PROGRAM=makecsv
CC=gcc

$(PROGRAM):$(PROGRAM).c
	$(CC) $(PROGRAM).c -o $(PROGRAM) -Wall

clean:
	rm $(PROGRAM) *~
