#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	float consumed1, consumed2;
	float n, bill1, bill2, bill;
	
	cout << "Enter Water Consumed based on the meter from the recent month (in gallons): "; cin >> consumed1;
	cout << "Enter Water Consumed based on the meter from the previous month (in gallons): "; cin >> consumed2;
	cout << "Enter Total Balance: "; cin >> n;
	
	bill1 = (consumed1-consumed2) * 1.1;
	bill = bill1 + 35;
	bill2 = n - bill;
	
	if (bill2 > 0)
	cout << "Your water bill is " << bill + bill2 + 20 << "!";
	
	else
	cout << "Your water bill is " << bill << "!";


	return 0;
}
	
