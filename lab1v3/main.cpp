#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 double x, y, z, d;
 cout << "x=";
 cin >> x;
 y = sin(x);
 z = x - (pow(x,3)/6) + (pow(x,5)/120);
 d = abs(z - y);
 cout << "exact value: " << y << endl;
 cout << "approximate value: " << z << endl;
 cout << "difference of values: " << d << endl;
 return 0;
}