#include <iostream>

using namespace std;

int main()
{
    short int c, d;
    cin >> c >> d;
    if (c >= 0 && c <= 23 && d >= 0 && d <= 59) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
