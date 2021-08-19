file1 = stock00
file2 = usestck0
all: $(file1).o $(file2).o main clean
$(file1).o: $(file1).cpp
	g++ -pedantic-errors -c -std=c++11 -Wall -Wextra $(file1).cpp 
$(file2).o: $(file2).cpp
	g++ -pedantic-errors -c -std=c++11 -Wall -Wextra $(file2).cpp 

main: $(file1).o $(file2).o
	g++ -o main $(file1).o $(file2).o

clean:
	rm $(file1).o $(file2).o
