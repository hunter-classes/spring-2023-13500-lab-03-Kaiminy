main: main.cpp reservoir.cpp
	g++ -o main main.cpp reservoir.cpp

main.o: main.cpp reservoir.h
	g++ -c main.cpp

reservoir.o: reservoir.cpp reservoir.h
	g++ -c reservoir.cpp

reverseorder.o: reverseorder.cpp reverseorder.h
	g++ -c reverseorder.cpp

clean:
	rm -f main.o reservoir.o