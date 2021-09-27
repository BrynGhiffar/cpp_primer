file1 = acctabc
file2 = usebrass3

all: $(file1).o $(file2).o main clean

$(file1).o: $(file1).cpp
	g++ -g -c -o $(file1).o $(file1).cpp -std=c++11 -pedantic-errors -Wall -Wextra

$(file2).o: $(file2).cpp
	g++ -g -c -o $(file2).o $(file2).cpp -std=c++11 -pedantic-errors -Wall -Wextra

main: $(file1).o $(file2).o
	g++ -g -o main $(file1).o $(file2).o -std=c++11 -pedantic-errors -Wall -Wextra

clean:
	rm $(file1).o $(file2).o
