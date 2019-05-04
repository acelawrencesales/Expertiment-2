#include <iostream>

using namespace std;

int main ()
{
	int x, y, a, b;
	
	cout << "How many rows: "; cin >> x;
	cout << "How many columns: "; cin >> y;
	
	for (b=1; b<=x; b++)
	{
		for (a=1; a<=y; a++)
		{
			cout << "*";
		}
		cout << endl;
	}
return 0;
}
