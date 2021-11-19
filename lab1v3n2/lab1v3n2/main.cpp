#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cout << "x=";
    cin >> x;
    if ( 2 * x - 1 >= 0 ) {
        y = sqrt(2 * x - 1);
        cout << "Result: " << y;
    }
    else { cout << "Set a different value of Х"; }
    return 0;
}
