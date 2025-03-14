#include <iostream>
#include <Windows.h>

using namespace std; 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "введите первое число: ";
	cin >> a;

	cout <<endl<< "введите второе число: ";
	cin >> b;

	cout << endl << "введите третье число: ";
	cin >> c;

    cout << "результат: ";

    if (a >= b && a >= c)
    {
        if (b >= c) 
        {
            cout << a << " " << b << " " << c;
        }
        else 
        {
            cout << a << " " << c << " " << b;
        }
    }
    else if (b >= a && b >= c) {
        if (a >= c) {
            cout << b << " " << a << " " << c;
        }
        else {
            cout << b << " " << c << " " << a;
        }
    }
    else if ( c >= a && c >= b)
    {
        if (a >= b) {
            cout << c << " " << a << " " << b;
        }
        else {
            cout << c << " " << b << " " << a;
        }
    }
	
}