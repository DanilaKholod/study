#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
struct rational {
	int m;
	int n;
	rational(int a, int b) {
		m = a / gcd(a, b);
		n = b / gcd(a, b);
	}
	rational(int a) {
		m = a;
		n = 1;
	}
	rational(const rational &A) { //copy
		m = A.m;
		n = A.n;
	}
	rational &operator=(const rational &A) { //=
		m = A.m;
		n = A.n;
		return *this;
	}
	rational &operator*=(const rational &A) { //operator *=
		m *= A.m;
		n *= A.n;
		int d = gcd(m, n);
			m /= d;
			n /= d;
		return *this;
	}
	rational &operator/=(const rational &A) { //operator /=
		m *= A.n;
		n *= A.m;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
	rational &operator+=(const rational &A) { //operator +=
		m = ((m * A.n) + (n * A.m));
		n *= A.n;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
	rational &operator-=(const rational &A) { //operator -=
		m = ((m * A.n) - (n * A.m));
		n *= A.n;
		int d = gcd(m, n);
		m /= d;
		n /= d;
		return *this;
	}
}; // конец структуры конструктора 
	rational &operator*(rational A,const rational &B) { //*
		return A *= B;
	}
	rational &operator/(rational A,const rational &B) { //   /
		return A /= B;
	}
	rational &operator+(rational A,const rational &B) { //  +
		return A += B;
	}
	rational &operator-(rational A,const rational &B) { // -
		return A -= B;
	}
	bool operator==(const rational &A,const rational &B) { // ==
		return ((A.m == B.m) && (A.n == B.n));
}
	bool operator!=(const rational &A,const rational &B) { // !=
		return !(A == B);
}
	bool operator>(const rational &A,const rational &B) { //  >
		return (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*A.m > 0)) || (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*A.m < 0));
	}
	bool operator<(const rational &A,const rational &B) { //  <
		return (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*A.m > 0)) || (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*A.m < 0));	
	}
	bool operator>=(const rational &A, const rational &B) { //  >=
		return !(A < B);
	}
	bool operator<=(const rational &A, const rational &B) { //  <=
		return !(A > B);
	}
	istream& operator >>(istream &in, rational &A)
	{
		in >> A.m>> A.n;
		return in;
	}
	ostream& operator <<(ostream &out, const rational &A)
	{
		out << A.m << "/" << A.n;
		return out;
	}
	int main() {
		rational A(1, 2), B(1, 6);
		cout << "A=" << A << " B=" << B << " A*=B=" << A + B << endl;
		return 0;
	}
 

