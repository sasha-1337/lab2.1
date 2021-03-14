#include "Number.h"

int main()
{
    Number x(2,2);
    Number z(3, 3);
    cout << x << endl;
    cout << z << endl;
    Number y = x * z;
    cout << y << endl << endl;


    int mul;
    cin >> x;
    cout << x;
    cout << " multiplier - ? "; cin >> mul;
    x.multiply(mul);
    cout << x;


    Number a(1, 1);
    cout << endl << endl;
    cout << " a  " << a << endl;
    cout << " a++  " << a++;
    cout << " a--  " << a--;
    cout << " ++a  " << ++a;
    cout << " --a  " << --a;

	return 0;
}