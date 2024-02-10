APPEND = Assign01
all : main.o summation.o product.o poly.o maxfloat.o
	g++ main.o summation.o product.o poly.o maxfloat.o -o $(APPEND)
main.o : main.cpp
	g++ -c main.cpp -o main.o
summation.o : summation.cpp
	g++ -c summation.cpp -o summation.o
product.o : product.cpp
	g++ -c product.cpp -o product.o
poly.o : poly.cpp
	g++ -c poly.cpp -o poly.o
maxfloat.o : maxfloat.cpp
	g++ -c maxfloat.cpp -o maxfloat.o

clean :
	rm main*.o $(APPEND)