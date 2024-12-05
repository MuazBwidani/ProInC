
#include <iostream>
using namespace std;
bool test(int x)
{
	for (int i = 2; i <= x - 1; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}int main()
{
	int x;
	cout << "Pleas enter integer number" << endl;
	cin >> x;
	if (test(x) == true)
		cout << x << "  is a prime number " << endl;
	else
		cout << x << "  is not a prime number " << endl;
	return 0;
}
//Name and Sorname : MUAZ BWIDANI
//Student Number : 1306190101
//Homework 7