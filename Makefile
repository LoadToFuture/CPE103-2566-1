all : main.o Function.o
	g++ main.o Function.o -o week11

main.o : main.cpp
	g++ -c main.cpp -o main.o

Function.o : Function.cpp
	g++ -c Function.cpp -o Function.o

clean :
	rm main.o Function.o week11

# all : Function.o main.o
# 	g++ *.o -o week11

# %.o : %.cpp
# 	g++ -c $< -o $@

# clean :
# 	rm -f *.o week11