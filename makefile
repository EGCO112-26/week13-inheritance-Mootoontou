all: inh LL_test

inh: main.cpp LL.cpp Node.cpp
	g++ main.cpp LL.cpp Node.cpp -o inh

LL_test: LL_test.cpp LL.cpp Node.cpp
	g++ LL_test.cpp LL.cpp Node.cpp -o LL_test

clean:
	rm -f inh LL_test
	g++ main.cpp LL.cpp -o inh