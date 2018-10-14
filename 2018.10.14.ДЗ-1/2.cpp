/*
Write a program that finds a reverse modulo element. In other words
by numbers X and N, you need to find a number Y such that the remainder of dividing X * Y by N
equals one. The program guarantees that all numbers are natural
*/
#include <iostream>
using namespace std;

int main() {
	unsigned int X, N;
	cin >> X >> N;
	/*We are looking for the number we need. It must be less than N*/
	for (unsigned int Y = 1; Y < N; Y++) { 
		if ((X * Y) % N == 1) {
			/*If found, then display this number*/
			cout << Y;
			return 0;
		}
	}
	/*If we do not find it, then we end the program and output "None"*/
	cout << "None";
	return 0;
}