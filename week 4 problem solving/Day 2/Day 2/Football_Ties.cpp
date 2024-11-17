#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int Awon = X % 3;
        int Bwon = Y % 3;
        int totaldrawpoints = min(Awon, Bwon);
        cout << totaldrawpoints << endl;
    }
    return 0;
}