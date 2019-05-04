#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
	
int abill, bbill, hours;
char A, B, C, internet;
	
cout << "Enter Internet Package (A, B , or C): "; cin >> internet;
cout << "Enter Amount of Hours Used: "; cin >> hours;
	
switch (internet)
{
	case 'A':
		if (hours <= 10)
		cout << "Your bill is P995!";
		else 
		abill = ((hours - 10) * 20) + 995;
		cout << "Your bill is P" << abill << "!";
		break;
	case 'B':
		if (hours <= 20)
		cout << "Your bill is P1495!";
		else 
		bbill = ((hours - 10) * 10) + 1495;
		cout << "Your bill is P" << bbill << "!";
		break;
	case 'C':
		if (hours >= 21)
		cout << "Your bill is P1995!";
		break;
}
			
return 0;

}
