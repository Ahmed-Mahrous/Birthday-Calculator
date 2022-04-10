#include<iostream>
using namespace std;
int main()
{
	char y;
	int day, month, year;
	cout << "Enter Your Date Of Birth (day,month,year) \n";
	cin >> day;
	cin >> month;
	cin >> year;
	if (day > 31) {
		cout << "Enter A True Day ";
	}
	else if (month > 12) {
		cout << "Enter A Valid Value For A Month ";
	}


	if (month == 1) {
		month == 13;
		year--;

	}
	if (month == 2) {
		month == 14;
		year--;
	}
	int q = day;
	int m = month;
	int k = year % 100;
	int j = year / 100;
	int h = q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
	h = h % 7;
	switch (h)
	{
	case 0: cout << "Saturday \n"; break;
	case 1: cout << "Sunday \n"; break;
	case 2: cout << "Monday \n"; break;
	case 3: cout << "Tuesday \n"; break;
	case 4: cout << "Wednesday \n"; break;
	case 5: cout << "Thursday \n"; break;
	case 6: cout << "Friday \n"; break;
	}
	system("pause");
	return 0;
}