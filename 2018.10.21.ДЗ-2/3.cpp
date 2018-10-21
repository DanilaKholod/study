#include <iostream> 
using namespace std;
struct Array
{
	int arraySize;
	int* data;
	Array(int n) 
	{
		arraySize = n;
		data = new int[n];
	};
	Array(const Array& A) //operator =
	{
		arraySize = A.arraySize;
		data = A.data;
	};
	~Array() //distructor 
	{
		delete[] data;
	};
	void input()//input 
	{
		for (int i = 0; i < arraySize; i++)
			cin >> *(data + i);
	};
	void output()//output 
	{
		for (int i = 0; i < arraySize; i++)
			cout << *(data + i) << " ";
		cout << "\n";
	};
	int &operator[](int i)//operator []
	{
		return data[i];
	};
	int max()//test function
	{
		int s = *data;
		for (int i = 0; i < arraySize; i++)
			if (*(data + i) > s)
				s = *(data + i);
		return s;
	};
	int min()//test function
	{
		int s = *data;
		for (int i = 0; i < arraySize; i++)
			if (*(data + i) < s)
				s = *(data + i);
		return s;
	};
	int avg()//test function
	{
		int sum = 0;
		for (int i = 0; i < arraySize; i++)
			sum += *(data + i);
		return (sum / arraySize);
	};
};
void ch(Array A)
{
	cout << "Copying constructor is working\n";
}
int main()
{
	int N; //size Array
	cin >> N;
	Array A(N);
	A.input();
	A.output();
	cout << A.max() << "\n";
	cout << A.min() << "\n";
	cout << A.avg() << "\n";
	cout << A[0] << " " << A[1] << " " << A[2] << "\n";//output 1 element 2 3 
	ch(A);
	return 0;
}
