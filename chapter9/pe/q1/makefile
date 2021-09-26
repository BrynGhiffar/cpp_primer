file1 = golf
file2 = main
all: $(file1).o $(file2).o main clean

clear:
	rm main

$(file1).o: $(file1).cpp
	g++ -c -g -std=c++11 -o $(file1).o $(file1).cpp -pedantic-errors -Wall -Wextra

$(file2).o: $(file2).cpp
	g++ -c -g -std=c++11 -o $(file2).o $(file2).cpp -pedantic-errors -Wall -Wextra

main: $(file1).o $(file2).o
	g++ -g -std=c++11 -o main $(file1).o $(file2).o -pedantic-errors -Wall -Wextra

clean:
	rm $(file1).o $(file2).o
