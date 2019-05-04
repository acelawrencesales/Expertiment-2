#include <iostream>

using namespace std;

int main ()
{
	int n, x, y;
	
	do
	{
		cout << "Enter a number: "; cin >> n;
		if (n <= 0)
			cout << "Thank you!";
		else if (n > 0)
		{
		y = 0;
		for (x=1; x<=n; x++)
			y += x;
			cout << "The sum of all whole numbers from 1 to " << n << " is " << y << "." << "\n"; 
		}
	} while (n > 0);

return 0;

}
