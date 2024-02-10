APPEND = week10
all : main.o Function.o
	g++ main.o Function.o -o $(APPEND)

main.o : main.cpp
	g++ -c main.cpp -o main.o
Function.o : Function.cpp
	g++ -c Function.cpp -o Function.o

clean :
	rm *.o $(APPEND)