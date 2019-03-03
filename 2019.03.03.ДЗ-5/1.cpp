/*Implement the class double_stack - a stack of real numbers of variable size. The class must contain constructor, destructor, methods push, pop*/
#include <iostream>
using namespace std;
struct Node {
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};
class double_stack {
	Node* head;
public:
	double_stack() :head(NULL) {}
	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	double pop() {
		if (head == NULL) {
			cout << "Stack is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	}
	~double_stack() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main() {
	double_stack A;
	A.push(9.324);
	A.push(8.123);
	A.push(0.24);
	A.push(0.17);
	A.push(81.2);
	A.push(92.2);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	A.push(3.14);
	A.push(2.718182);
	A.push(1.23);
	A.push(9.11);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	return 0;
}