
#include <iostream>
using namespace std;
#include<string>
int main()
{

	int d, m, y, db, mb, yb;
	cout << "Enter Date of today like dd mm yyyy" << endl;
	cin >> d >> m >> y;
	cout << "Enter Date of birthday like dd mm yyyy" << endl;
	cin >> db >> mb >> yb;
	if (db > d)
		switch (m)
		{
		case 1:
			d = d + 31;
			m = 12;
			y = y - 1;
			break;
		case 2:
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			{
				d = d + 28;
				m = m - 1;
			}
			else {
				d = d + 29;
				m = m - 1;
			}
			break;
		case 3:
			d = d + 31;
			m = m - 1;

			break;
		case 4:
			d = d + 30;
			m = m - 1;

			break;
		case 5:
			d = d + 31;
			m = m - 1;

			break;
		case 6:
			d = d + 30;
			m = m - 1;

			break;
		case 7:
			d = d + 31;
			m = m - 1;

			break;

		case 8:
			d = d + 31;
			m = m - 1;
			break;

		case 9:
			d = d + 30;
			m = m - 1;
			break;

		case 10:
			d = d + 31;
			m = m - 1;
			break;

		case 11:
			d = d + 30;
			m = m - 1;
			break;

		case 12:
			d = d + 31;
			m = m - 1;
			break;

		default:
			cout << "You entered mistake date" << endl;
			break;
		}
	if (m < mb)
	{
		m = m + 12;
		y = y + 1;
	}
	cout << "Your Age is  :" <<  y - yb << "  years " << m - mb << "  months " << d - db <<"  days"<< endl;
	cout << "Thank you for using our program" << endl;
}

	//MUAZ BWIDANI
    //1306190101


