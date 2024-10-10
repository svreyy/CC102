#include <iostream>

using namespace std;

int main()
{
	cout << "***************CALCULATOR***************" << endl;
	
	
	
	
	int a,b;
	
	cout << "Enter First Number" << endl;
	cin >> a;
	cout << "****************************************" << endl;
	cout << "Enter Second Number" << endl;
	cin >> b;

	cout << "****************************************" << endl;
	
	cout << "sum: " << a << '+' << b << '=' << a+b << endl;
	cout << "****************************************" << endl;
	
	cout << "Difference: " << a << '-' << b << '=' << a-b << endl;
	cout << "****************************************" << endl;
	
	cout << "Quotient: " << a << '/' << b << '=' << a/b << endl;
	cout << "****************************************" << endl;
	
	cout << "Product: " << a << '*' << b << '=' << a*b << endl;
	cout << "****************************************" << endl;
	
	cout << "Remainder: " << a << '%' << b << '=' << a%b << endl;
	cout << "****************************************" << endl;
	
	
	return 0;

}