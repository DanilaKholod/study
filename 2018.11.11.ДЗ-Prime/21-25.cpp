/*For the Date structure:
- write a method that writes out the name of the day of the week by date;
- write a method that determines how many days are left until the New Year;
- write the operator minus the return, the number of days elapsed between dates;
- write the operator plus, taking an integer number of days and returning the date separated by that number of days;
- write a method that finds the next date-palindrome.*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int m = 0;
	for (int i = a; i > 1; i--)
	{
		if ((i % b) == 0)
		{
			m = i;
			break;
		};
	};
	return m;
}

struct Date
{
	int Day;
	int Month;
	int Year;

	Date()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}

	void input()
	{
		cin >> Day >> Month >> Year;
	}

	void output()
	{
		if ((Day / 10) == 0) { cout << 0; };
		cout << Day << ".";
		if ((Month / 10) == 0) { cout << 0; };
		cout << Month << "." << Year;
	}

	bool check()
	{
		if ((Year % 400) == 0) { return true; }
		else
		{
			if ((Year % 100) == 0) { return false; }
			else
			{
				if ((Year % 4) == 0) { return true; }
				else { return false; };
			};
		};
	}

	int day()
	{
		if (Month == 2)
		{
			if (check()) { return 29; }
			else { return 28; };
		}
		else
		{
			if (((Month <= 7) && (((Month % 2) != 0))) || ((Month >= 8) && ((Month % 2) == 0)))
			{
				return 31;
			}
			else { return 30; };
		};
	}

	int code_month()
	{
		if ((Month == 1) || (Month == 10)) { return 0; };
		if (Month == 5) { return 1; };
		if (Month == 8) { return 2; };
		if ((Month == 2) || (Month == 3) || (Month == 11)) { return 3; };
		if (Month == 6) { return 4; };
		if ((Month == 9) || (Month == 12)) { return 5; };
		if ((Month == 4) || (Month == 7)) { return 6; };
	}

	int code_year()
	{
		int n = (Year / 100);
		n -= gcd(n, 4);
		n *= 5;
		n -= gcd(n, 7);
		return n;
	}


	int day_of_week()
	{
		int m = Day + code_month();
		m -= gcd(m, 7);
		int p = (Year % 100);
		p -= gcd(p, 28);
		p += ((Year % 100) / 4);
		p += code_year();
		if (((Month == 1) || (Month == 2)) && (check() == 1)) { p--; };

		m += p;
		m -= gcd(m, 7);

		return m;
	}

	int new_year()
	{
		int a = Day, b = Month, c = Year;
		int p = 0;
		while (Month < 12)
		{
			p += day();
			Month++;
		};
		while (Day <= 31)
		{
			p++;
			Day++;
		};

		Day = a;
		Month = b;
		Year = c;

		return p;
	}

	int &operator-(Date &B)
	{
		int a = Day, b = Month, c = Year;
		int n = (new_year() - B.new_year()), p = 0;

		if (Year > B.Year)
		{
			while (B.Year < Year)
			{
				B.Year++;
				if (B.check()) { p -= 366; }
				else { p -= 365; };
			};
		}
		else
		{
			while (Year < B.Year)
			{
				Year++;
				if (check()) { p += 366; }
				else { p += 365; };
			};
		};
		B.Day = 0;
		B.Day += n;
		B.Day += p;
		if (B.Day < 0) { B.Day = (-B.Day); };
		Day = a;
		Month = b;
		Year = c;
		return (B.Day);
	}

	Date &operator+(int a) {
		Day += a;

		while (Day > day())
		{
			Day -= day();
			Month++;
		}

		while (Month > 12)
		{
			Month -= 12;
			Year++;
		}
		return *this;
	}
	Date palindrom() {
		int*date = new int[8];
		int k = 0;

		while (k == 0)
		{
			int m = 0;
			date[0] = (Day / 10);
			date[1] = (Day % 10);
			date[2] = (Month / 10);
			date[3] = (Month % 10);
			date[4] = (Year / 1000);
			date[5] = ((Year / 100) % 10);
			date[6] = ((Year / 10) % 10);
			date[7] = (Year % 10);
			for (int i = 0; i <= 3; i++)
			{
				if (date[i] != date[7 - i]) break;
				m++;
			}
			if (m == 4) { break; }
			else
			{
				Day++;
				if (Day > day())
				{
					Day -= day();
					Month++;
				}
				if (Month > 12)
				{
					Month -= 12;
					Year++;
				}
			}
		}
		return *this;
	}
};

int main()
{
	Date First;
	cout << "Enter the first date: " << "\n";
	First.input();
	First.output();
	cout << "\n";
	if (First.day_of_week() == 1) { cout << "Sunday"; };
	if (First.day_of_week() == 2) { cout << "Monday"; };
	if (First.day_of_week() == 3) { cout << "Tuesday"; };
	if (First.day_of_week() == 4) { cout << "Wednesday"; };
	if (First.day_of_week() == 5) { cout << "Thursday"; };
	if (First.day_of_week() == 6) { cout << "Friday"; };
	if ((First.day_of_week() == 0) || (First.day_of_week() == 7)) { cout << "Saturday"; };
	cout << '\n';
	cout << First.new_year() << " days left until New Year" << '\n';
	Date Second;
	cout << "Enter the second date: " << "\n";
	Second.input();
	cout << "Between them " << (First - Second) << " days" << '\n';
	int n;
	cout << "Enter the numder of days: ";
	cin >> n;
	First + n;
	cout << "This is the date: ";
	First.output();
	cout << '\n';
	cout << "Next date palindrom for first date: ";
	First.palindrom();
	First.output();
	return 0;
}
