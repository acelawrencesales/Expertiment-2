#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()

{
	int x, y;
	float V;
	const float z = 2.5;
	
	cout << "Enter Desired Number: "; cin >> x;
	cout << "Enter Desired Number: "; cin >> y;
	
	switch (x)
	{
		case 1:
			if (y > 1 && y < 5)
			{V = x*y*z;
			cout << setw(10) << setprecision(2) << fixed;
			cout << V;}
			else if (y >=5)
			{V = x + (y/z);
			cout << setw(10) << setprecision(2) << fixed;
			cout << V;}
			break;
		case 2:
			if (y <= 5)
			{V = abs((x-y)/z);
			cout << setw(10) << setprecision(2) << fixed;
			cout << V;}
			else if (y > 5)
			{V = x - sqrt(y+z);
			cout << setw(10) << setprecision(2) << fixed;
			cout << V;}
			break;
		default:
			V = x + y + z;
			cout << setw(10) << setprecision(2) << fixed;
			cout << V;
			break;
	}
return 0;
}
