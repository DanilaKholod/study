/*Write a program calculating the arithmetic mean
sequences of numbers. The length of the sequence is unknown, however
the sequence ends in zero and no other zero values
is found. The program is prohibited to use additional
memory (aka arrays, lists ...)*/
#include <iostream>
using namespace std;

int main() {
	unsigned int input, sum = 0, lenght = 0;
	float avarage;
	do {
		cin >> input;
		sum += input;
		lenght++;
	} while (input != 0);
	avarage = (float)sum / (float)lenght;
	cout << avarage;
	return 0;
}