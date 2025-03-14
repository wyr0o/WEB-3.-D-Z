#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool x = true;
	bool y = true;

	cout << "оператор: || "<< endl;

	cout << boolalpha<< x<< " " << y<< "  | " << x||y;
	cout <<endl<< boolalpha << x << " " << !y << " | " << (x || (!y));
	cout << endl << boolalpha << !x << " " << y << " | " << ((!x) || y);
	cout << endl << boolalpha << !x << " " << !y << "| " << ((!x) || (!y));


	cout <<endl<< endl<< "оператор: && " << endl;

	cout << boolalpha << x << " " << y << "  | " << x && y;
	cout <<endl<< boolalpha << x << " " << !y << " | " << (x && (!y));
	cout << endl << boolalpha << !x << " " << y << " | " << ((!x) && y);
	cout << endl << boolalpha << !x << " " << !y << "| " << ((!x) && (!y));

	cout << endl;

}