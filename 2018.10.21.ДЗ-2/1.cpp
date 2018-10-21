#include <iostream>
using namespace std;
int gcd(int a, int b) { //function NOD
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
	rational() { //unknow rational nubmder
		m = 0;
		n = 1;
	}
	rational(const rational &A) { //copy
		m = A.m;
		n = A.n;
	}
	rational &operator=(const rational &A) { // =
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
};
rational &operator*(rational A, const rational &B) { //operator *
	return A *= B;
}
rational &operator/(rational A, const rational &B) { //operator   /
	return A /= B;
}
rational &operator+(rational A, const rational &B) { //operator  +
	return A += B;
}
rational &operator-(rational A, const rational &B) { //operator -
	return A -= B;
}
bool operator==(const rational &A, const rational &B) { //operator ==
	return ((A.m == B.m) && (A.n == B.n));
}
bool operator!=(const rational &A, const rational &B) { //operator !=
	return !(A == B);
}
bool operator>(const rational &A, const rational &B) { //operator  >
	return (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*B.n > 0)) || (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*B.n < 0));
}
bool operator<(const rational &A, const rational &B) { //operator  <
	return (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*B.n > 0)) || (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*B.n < 0));
}
bool operator>=(const rational &A, const rational &B) { //operator  >=
	return !(A < B);
}
bool operator<=(const rational &A, const rational &B) { //operator  <=
	return !(A > B);
}
istream& operator >>(istream &in, rational &A) //operator >>
{
	in >> A.m >> A.n;
	int d = gcd(A.m, A.n);
	A.m /= d;
	A.n /= d;
	return in;
}
ostream& operator <<(ostream &out, const rational &A) //operator <<
{
	out << A.m << "/" << A.n;
	return out;
}
int main() {
	rational A(1, 2), B(-1, 6); //example rational A and B
	cout << "A = " << A << " B = " << B << endl;
	cout << "A + B = " << A + B << endl;//arifm +
	cout << "A - B = " << A - B << endl;//arifm -
	cout << "A * B = " << A * B << endl;//arifm *
	cout << "A / B = " << A / B << endl;//arifm /
	rational Q = A;//arifm =
	rational(X) = Q *= B;
	cout << "A *= B =" << X << endl;//arifm *=
	rational W = A;
	rational(Y) = W /= B;
	cout << "A /= B =" << Y << endl;//arifm /=
	rational F = A;
	rational(Z) = F += B;
	cout << "A += B =" << Z << endl;//arifm +=
	rational H = A;
	rational(O) = H -= B;
	cout << "A -= B =" << O << endl;//arifm -=
	rational C, E(5, 7), G(-5, 7); //example rational E and G
	cout << "Enter the numerator and denominator of the fraction" << endl;
	cin >> C;//input rational C
	cout << "C = " << C << endl;
	cout << "E = " << E << endl;
	if (C == E) {
		cout << C << " == " << E << endl;//arifm ==
	}
	if (C != E) {
		cout << C << " != " << E << endl;//arifm !=
	}
	if (C > E) {
		cout << C << " > " << E << endl;//arifm >
	}
	if (C >= E) {
		cout << C << " >= " << E << endl;//arifm >=
	}
	if (C < E) {
		cout << C << " < " << E << endl;//arifm  <
	}
	if (C <= E) {
		cout << C << " <= " << E << endl;//arifm <=
	}
	cout << "G = " << G << endl;
	if (C == G) {
		cout << C << " == " << G << endl;//arifm ==
	}
	if (C != G) {
		cout << C << " != " << G << endl;//arifm !=
	}
	if (C > G) {
		cout << C << " > " << G << endl;//arifm >
	}
	if (C >= G) {
		cout << C << " >= " << G << endl;//arifm >=
	}
	if (C < G) {
		cout << C << " < " << G << endl;//arifm  <
	}
	if (C <= G) {
		cout << C << " <= " << G << endl;//arifm <=
	}
	return 0;
}


