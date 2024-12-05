// MUAZ BWIDANI 6 HW.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
int product(int x, int y)
{
	return x * y;
}
int Difference(int x, int y)
{
	return x - y;
}
float Quotient(int x, int y)
{
	float x1 = static_cast<float>(x);
	float y1 = static_cast<float>(y);
	float d = x1 / y1;
	return d;
}
int main()
{
	int x, y;
	cout << "Please write Two integer numbers" << endl;
	cin >> x >> y;

	cout << x << "+" << y << "=" << sum(x, y)<<endl;
	cout << x << "*" << y << "=" << product(x, y)<<endl;
	cout << x << "-" << y << "=" << Difference(x, y)<<endl;
	cout << x << "/" << y << "=" << Quotient(x, y)<<endl;

}

//Name And SurNAme :MUAZ BWIDANI
//Student Number   :1306190101
//6 Homwork Calculat