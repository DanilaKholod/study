/*Write a logical function checking is a string palindrome.
We can assume that the string consists only of Latin letters.*/
#include <iostream>
using namespace std;
bool palindrome(char*a, int b) {
	b--;
	for (int i = 0; i <= ((b / 2) - 1); i++) { //check the first and last character
		if (a[i] == a[b - i]) { //and so on
			return 1; //if all the characters match, then return 1
		}
	}
	return 0; //if not, return 0
}
int length(char* a) //length 
{
	int b = 0;
	while (*a++)
	{
		b++;
	}
	return b;
}
int main() {
	int n;
	char* array = new char[256];
	cin.getline(array, 256, '\n');
	n = length(array);
	cout << "\n";
	if (palindrome(array, n) == 1) { //check palindrome whether our array
		cout << "Yes"; //if yes, output "yes"
	}
	else {
		cout << "No"; //if not, then output "no"
	}
	return 0; //end
}