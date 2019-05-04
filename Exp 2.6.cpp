#include <iostream>
#include <string>

using namespace std;

int main()

{
	int a, b, n;
	int c = 1;
	
	cout << "0, 1, ";
	
	for (n = 1; n <= 20; n++)
	{
		b = a + c;
		a = c;
		c = b;
		
		cout << b << ", ";
	}
	
	return 0;
}
