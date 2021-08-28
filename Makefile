Mycal: main.o percal.o
		g++ $^ -o $@ 
main.o: main.cpp 
		g++ -c $< 
percal.o: percal.cpp
		g++ -c $< 
.PHONY:clean
clean:
		rm -f *.o Mycal

