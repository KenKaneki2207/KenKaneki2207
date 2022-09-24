#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter 3 numbers ";
	cin >> a >> b >>c;
	if (a>=b)
	{
		if (a>=c)
			cout << a;
		else
			cout << c;
	}
	else if (b>=c)
	{
		if (b>=a)
			cout << b;
		else
			cout << a;
	}
	else if (c>=a)
	{
		if (c>=b)
			cout << c;
		else
			cout << b;
	}
	return 0;
}
