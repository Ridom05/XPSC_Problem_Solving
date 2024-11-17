#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    int ans = abs(X - Y);
    if (ans >= 18)
    {
        cout << "RCB" << endl;
    }
    else
    {
        cout << "CSK" << endl;
    }
    return 0;
}