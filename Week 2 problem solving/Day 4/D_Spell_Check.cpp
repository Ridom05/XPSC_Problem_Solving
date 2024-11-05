#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string given = "Timur";
        if (s.size() != n)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            sort(given.begin(), given.end());
            if (given == s)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}