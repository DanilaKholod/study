/*Write a program that checks the sequence of brackets for correctness. There are 3 types of brackets in the sequence: (), {}, [].
A bracket sequence is called correct if each bracket is closed by a corresponding one.*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool Brackets(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	return false;
}
bool BalancedParentheses(string b)
{
	stack<char> A;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '(' || b[i] == '{' || b[i] == '[')
			A.push(b[i]);
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']')
		{
			if (A.empty() || !Brackets(A.top(), b[i]))
				return false;
			else
				A.pop();
		}
	}
	return A.empty();
}
int main()	{	
	string c;
	cout << "Enter an expression: ";
	cin >> c;
	if (BalancedParentheses(c))
		cout << "Balanced" << endl;
	else
		cout << "Not balanced." << endl;
	return 0;
}