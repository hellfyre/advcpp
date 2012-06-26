CC=g++
CFLAGS=-Wall

visitor: main.o foo.o dispatcher.o
	$(CC) $^ -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

foo.o: foo.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

dispatcher.o: dispatcher.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

cleanall: clean
	rm -f visitor

clean:
	rm -f *.o
