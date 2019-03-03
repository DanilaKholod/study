/*Implement the class string_queue - a string queue. The class must contain a constructor, destructor, methods push, pop.*/
#include <iostream>
#include <string>
using namespace std;
struct Node {
	string data;
	Node* next = NULL;
};
class string_queue {
	Node* head;
public:
	string_queue():head(NULL) {}
	void push(string x) {
		if (head == NULL) {
			head = new Node;
			head->data = x;
		}
		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new Node;
		temp->next->data = x;
	}
	string pop() {
		if (head == NULL) {
			cout << "Queue is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		string x = head->data;
		delete temp;
		return x;
	}
	~string_queue() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main() {
	string_queue A;
	A.push("Use the Force,");
	A.push("Luke");
	A.push("I am your father");
	A.push("NOOOOOOOO");
	A.push("It's a lie!");
	cout << A.pop() << " ";
	cout << A.pop() << "\n";
	cout << A.pop();
	return 0;
}