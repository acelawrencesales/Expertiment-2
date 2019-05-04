#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	double f, s, t;
	
	cout << "Enter First Number: "; cin >> f;
	cout << "Enter Second Number: "; cin >> s;
	cout << "Enter Third Number: "; cin >> t;
	
	if (f >= s && f >= t)
	cout << "The LARGEST of the three numbers is " << f << ".";
	
	else if (s >= f && s >= t)
	cout << "The LARGEST of the three numbers is " << s << ".";
	
	else if (t >= f && t >= s)
	cout << "The LARGEST of the three numbers is " << t << ".";

return 0;

}
